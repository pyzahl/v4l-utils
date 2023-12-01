/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright 2022 Collabora Ltd.
 *
 * AUTOMATICALLY GENERATED BY v4l2-tracer-gen.pl DO NOT EDIT
 */

#ifndef TRACE_GEN_H
#define TRACE_GEN_H

void trace_v4l2_ctrl_h264_sps_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_h264_pps_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_h264_scaling_matrix_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_h264_weight_factors_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_h264_pred_weights_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_h264_reference_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_h264_slice_params_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_h264_dpb_entry_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_h264_decode_params_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_fwht_params_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp8_segment_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp8_loop_filter_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp8_quantization_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp8_entropy_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp8_entropy_coder_state_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_vp8_frame_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_mpeg2_sequence_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_mpeg2_picture_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_mpeg2_quantisation_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hevc_sps_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hevc_pps_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_hevc_dpb_entry_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_hevc_pred_weight_table_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hevc_slice_params_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hevc_decode_params_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hevc_scaling_matrix_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hdr10_cll_info_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_hdr10_mastering_display_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp9_loop_filter_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp9_quantization_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp9_segmentation_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_vp9_frame_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_vp9_mv_probs_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_vp9_compressed_hdr_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_av1_sequence_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_av1_tile_group_entry_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_global_motion_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_loop_restoration_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_cdef_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_segmentation_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_loop_filter_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_quantization_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_av1_tile_info_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_av1_frame_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_ctrl_av1_film_grain_gen(void *ptr, json_object *parent_obj);
void trace_v4l2_rect_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_fract_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_area_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_capability_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_pix_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_fmtdesc_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frmsize_discrete_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frmsize_stepwise_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frmsizeenum_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frmival_stepwise_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frmivalenum_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_timecode_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_jpegcompression_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_requestbuffers_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_plane_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_buffer_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_exportbuffer_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_framebuffer_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_clip_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_window_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_captureparm_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_outputparm_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_cropcap_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_crop_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_selection_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_standard_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_bt_timings_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_dv_timings_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_enum_dv_timings_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_bt_timings_cap_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_dv_timings_cap_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_input_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_output_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_control_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_ext_control_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_ext_controls_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_queryctrl_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_query_ext_ctrl_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_querymenu_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_tuner_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_modulator_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frequency_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_frequency_band_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_hw_freq_seek_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_rds_data_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_audio_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_audioout_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_enc_idx_entry_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_enc_idx_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_encoder_cmd_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_decoder_cmd_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_vbi_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_sliced_vbi_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_sliced_vbi_cap_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_sliced_vbi_data_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_mpeg_vbi_itv0_line_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_mpeg_vbi_itv0_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_mpeg_vbi_fmt_ivtv_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_plane_pix_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_pix_format_mplane_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_sdr_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_meta_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_format_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_streamparm_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_vsync_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_ctrl_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_frame_sync_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_src_change_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_motion_det_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_event_subscription_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_dbg_match_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_dbg_register_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_dbg_chip_info_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_create_buffers_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_device_info_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_entity_desc_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_pad_desc_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_link_desc_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_links_enum_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_entity_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_intf_devnode_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_interface_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_pad_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_link_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_media_v2_topology_gen(void *arg, json_object *parent_obj, std::string key_name = "");
void trace_v4l2_edid_gen(void *arg, json_object *parent_obj, std::string key_name = "");

#endif
