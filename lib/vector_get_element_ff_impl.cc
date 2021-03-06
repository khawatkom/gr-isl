/* -*- c++ -*- */
/* 
 * Copyright 2018 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <gnuradio/io_signature.h>
#include "vector_get_element_ff_impl.h"

namespace gr {
  namespace isl {

    vector_get_element_ff::sptr
    vector_get_element_ff::make(int vector_length, int location)
    {
      return gnuradio::get_initial_sptr
        (new vector_get_element_ff_impl(vector_length, location));
    }

    /*
     * The private constructor
     */
    vector_get_element_ff_impl::vector_get_element_ff_impl(int vector_length, int location)
      : gr::sync_block("vector_get_element_ff",
              gr::io_signature::make(1, 1,  sizeof(float)*vector_length),
              gr::io_signature::make(1, 1, sizeof(float))), d_vector_length(vector_length), d_location(location)
    {}

    /*
     * Our virtual destructor.
     */
    vector_get_element_ff_impl::~vector_get_element_ff_impl()
    {
    }

    int
    vector_get_element_ff_impl::work(int noutput_items,
        gr_vector_const_void_star &input_items,
        gr_vector_void_star &output_items)
    {
      const float *in = (const float *) input_items[0];
      float *out = (float *) output_items[0];

      for (int i = 0; i<noutput_items; i++)
      {
        out[i] = in[i*d_vector_length + d_location];
      }

      // Tell runtime system how many output items we produced.
      return noutput_items;
    }

  } /* namespace isl */
} /* namespace gr */

