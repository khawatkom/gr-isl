# Copyright 2011 Free Software Foundation, Inc.
#
# This file is part of GNU Radio
#
# GNU Radio is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 3, or (at your option)
# any later version.
#
# GNU Radio is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with GNU Radio; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
install(FILES
    isl_pn_generate_i.xml
    isl_pmod.xml
    isl_oqpsk_coherrent_demod.xml
    isl_qpsk_decimator_cc.xml
    isl_c1_sys.xml
    isl_pn_decimator_FI.xml
    isl_PN_correlation.xml
    isl_PN_Location.xml
    isl_PN_Acquisition.xml
    isl_pn_correlator.xml
    isl_gmsk_demod.xml
    isl_qpsk_recover_cc.xml
    isl_fir_interpolator_ff.xml
    isl_vector_get_element_ff.xml DESTINATION share/gnuradio/grc/blocks
)
