// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// geometry_cpp_limit_skip
List geometry_cpp_limit_skip(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format, IntegerVector limit_n, IntegerVector skip_n);
RcppExport SEXP _vapour_geometry_cpp_limit_skip(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    rcpp_result_gen = Rcpp::wrap(geometry_cpp_limit_skip(dsn, layer, sql, ex, format, limit_n, skip_n));
    return rcpp_result_gen;
END_RCPP
}
// geometry_cpp
List geometry_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format, NumericVector fid);
RcppExport SEXP _vapour_geometry_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP, SEXP fidSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fid(fidSEXP);
    rcpp_result_gen = Rcpp::wrap(geometry_cpp(dsn, layer, sql, ex, format, fid));
    return rcpp_result_gen;
END_RCPP
}
// register_gdal_cpp
LogicalVector register_gdal_cpp();
RcppExport SEXP _vapour_register_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(register_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// cleanup_gdal_cpp
LogicalVector cleanup_gdal_cpp();
RcppExport SEXP _vapour_cleanup_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cleanup_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// version_gdal_cpp
CharacterVector version_gdal_cpp();
RcppExport SEXP _vapour_version_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(version_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// drivers_list_gdal_cpp
List drivers_list_gdal_cpp();
RcppExport SEXP _vapour_drivers_list_gdal_cpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(drivers_list_gdal_cpp());
    return rcpp_result_gen;
END_RCPP
}
// proj_to_wkt_gdal_cpp
CharacterVector proj_to_wkt_gdal_cpp(CharacterVector proj4string);
RcppExport SEXP _vapour_proj_to_wkt_gdal_cpp(SEXP proj4stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type proj4string(proj4stringSEXP);
    rcpp_result_gen = Rcpp::wrap(proj_to_wkt_gdal_cpp(proj4string));
    return rcpp_result_gen;
END_RCPP
}
// driver_gdal_cpp
CharacterVector driver_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _vapour_driver_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(driver_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// layer_names_gdal_cpp
CharacterVector layer_names_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _vapour_layer_names_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(layer_names_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// feature_count_gdal_cpp
DoubleVector feature_count_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex);
RcppExport SEXP _vapour_feature_count_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(feature_count_gdal_cpp(dsn, layer, sql, ex));
    return rcpp_result_gen;
END_RCPP
}
// read_fields_gdal_cpp
List read_fields_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex, CharacterVector fid_column_name);
RcppExport SEXP _vapour_read_fields_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(read_fields_gdal_cpp(dsn, layer, sql, limit_n, skip_n, ex, fid_column_name));
    return rcpp_result_gen;
END_RCPP
}
// read_geometry_gdal_cpp
List read_geometry_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, CharacterVector what, CharacterVector textformat, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex);
RcppExport SEXP _vapour_read_geometry_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP whatSEXP, SEXP textformatSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type what(whatSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type textformat(textformatSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(read_geometry_gdal_cpp(dsn, layer, sql, what, textformat, limit_n, skip_n, ex));
    return rcpp_result_gen;
END_RCPP
}
// read_names_gdal_cpp
List read_names_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql, IntegerVector limit_n, IntegerVector skip_n, NumericVector ex);
RcppExport SEXP _vapour_read_names_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP limit_nSEXP, SEXP skip_nSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type limit_n(limit_nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type skip_n(skip_nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(read_names_gdal_cpp(dsn, layer, sql, limit_n, skip_n, ex));
    return rcpp_result_gen;
END_RCPP
}
// projection_info_gdal_cpp
List projection_info_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql);
RcppExport SEXP _vapour_projection_info_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(projection_info_gdal_cpp(dsn, layer, sql));
    return rcpp_result_gen;
END_RCPP
}
// report_fields_gdal_cpp
CharacterVector report_fields_gdal_cpp(CharacterVector dsn, IntegerVector layer, CharacterVector sql);
RcppExport SEXP _vapour_report_fields_gdal_cpp(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(report_fields_gdal_cpp(dsn, layer, sql));
    return rcpp_result_gen;
END_RCPP
}
// vsi_list_gdal_cpp
CharacterVector vsi_list_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _vapour_vsi_list_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(vsi_list_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// sds_list_gdal_cpp
CharacterVector sds_list_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _vapour_sds_list_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(sds_list_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// warp_in_memory_gdal_cpp
List warp_in_memory_gdal_cpp(CharacterVector dsn, CharacterVector source_WKT, CharacterVector target_WKT, NumericVector target_geotransform, IntegerVector target_dim, IntegerVector band);
RcppExport SEXP _vapour_warp_in_memory_gdal_cpp(SEXP dsnSEXP, SEXP source_WKTSEXP, SEXP target_WKTSEXP, SEXP target_geotransformSEXP, SEXP target_dimSEXP, SEXP bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type source_WKT(source_WKTSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type target_WKT(target_WKTSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type target_geotransform(target_geotransformSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type target_dim(target_dimSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type band(bandSEXP);
    rcpp_result_gen = Rcpp::wrap(warp_in_memory_gdal_cpp(dsn, source_WKT, target_WKT, target_geotransform, target_dim, band));
    return rcpp_result_gen;
END_RCPP
}
// raster_info_gdal_cpp
List raster_info_gdal_cpp(CharacterVector dsn, LogicalVector min_max);
RcppExport SEXP _vapour_raster_info_gdal_cpp(SEXP dsnSEXP, SEXP min_maxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type min_max(min_maxSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_info_gdal_cpp(dsn, min_max));
    return rcpp_result_gen;
END_RCPP
}
// raster_gcp_gdal_cpp
List raster_gcp_gdal_cpp(CharacterVector dsn);
RcppExport SEXP _vapour_raster_gcp_gdal_cpp(SEXP dsnSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_gcp_gdal_cpp(dsn));
    return rcpp_result_gen;
END_RCPP
}
// raster_io_gdal_cpp
List raster_io_gdal_cpp(CharacterVector dsn, IntegerVector window, IntegerVector band, CharacterVector resample);
RcppExport SEXP _vapour_raster_io_gdal_cpp(SEXP dsnSEXP, SEXP windowSEXP, SEXP bandSEXP, SEXP resampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type window(windowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type band(bandSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type resample(resampleSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_io_gdal_cpp(dsn, window, band, resample));
    return rcpp_result_gen;
END_RCPP
}
// vapour_geom_name_cpp
Rcpp::CharacterVector vapour_geom_name_cpp(CharacterVector dsource, IntegerVector layer, Rcpp::CharacterVector sql, NumericVector ex);
RcppExport SEXP _vapour_vapour_geom_name_cpp(SEXP dsourceSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsource(dsourceSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(vapour_geom_name_cpp(dsource, layer, sql, ex));
    return rcpp_result_gen;
END_RCPP
}
// gdal_read_fids_all
NumericVector gdal_read_fids_all(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex);
RcppExport SEXP _vapour_gdal_read_fids_all(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_read_fids_all(dsn, layer, sql, ex));
    return rcpp_result_gen;
END_RCPP
}
// gdal_read_fids_ij
NumericVector gdal_read_fids_ij(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, NumericVector ij);
RcppExport SEXP _vapour_gdal_read_fids_ij(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP ijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ij(ijSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_read_fids_ij(dsn, layer, sql, ex, ij));
    return rcpp_result_gen;
END_RCPP
}
// gdal_read_fids_ia
NumericVector gdal_read_fids_ia(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, NumericVector ia);
RcppExport SEXP _vapour_gdal_read_fids_ia(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP iaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ia(iaSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_read_fids_ia(dsn, layer, sql, ex, ia));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_geom_all
List gdal_dsn_read_geom_all(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format);
RcppExport SEXP _vapour_gdal_dsn_read_geom_all(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_geom_all(dsn, layer, sql, ex, format));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_geom_ij
List gdal_dsn_read_geom_ij(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format, NumericVector ij);
RcppExport SEXP _vapour_gdal_dsn_read_geom_ij(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP, SEXP ijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ij(ijSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_geom_ij(dsn, layer, sql, ex, format, ij));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_geom_ia
List gdal_dsn_read_geom_ia(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format, NumericVector ia);
RcppExport SEXP _vapour_gdal_dsn_read_geom_ia(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP, SEXP iaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ia(iaSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_geom_ia(dsn, layer, sql, ex, format, ia));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_geom_fa
List gdal_dsn_read_geom_fa(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector format, NumericVector fa);
RcppExport SEXP _vapour_gdal_dsn_read_geom_fa(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP formatSEXP, SEXP faSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type format(formatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fa(faSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_geom_fa(dsn, layer, sql, ex, format, fa));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_fields_all
List gdal_dsn_read_fields_all(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector fid_column_name);
RcppExport SEXP _vapour_gdal_dsn_read_fields_all(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_fields_all(dsn, layer, sql, ex, fid_column_name));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_fields_ij
List gdal_dsn_read_fields_ij(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector fid_column_name, NumericVector ij);
RcppExport SEXP _vapour_gdal_dsn_read_fields_ij(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP, SEXP ijSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ij(ijSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_fields_ij(dsn, layer, sql, ex, fid_column_name, ij));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_fields_ia
List gdal_dsn_read_fields_ia(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector fid_column_name, NumericVector ia);
RcppExport SEXP _vapour_gdal_dsn_read_fields_ia(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP, SEXP iaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ia(iaSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_fields_ia(dsn, layer, sql, ex, fid_column_name, ia));
    return rcpp_result_gen;
END_RCPP
}
// gdal_dsn_read_fields_fa
List gdal_dsn_read_fields_fa(CharacterVector dsn, IntegerVector layer, CharacterVector sql, NumericVector ex, CharacterVector fid_column_name, NumericVector fa);
RcppExport SEXP _vapour_gdal_dsn_read_fields_fa(SEXP dsnSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP exSEXP, SEXP fid_column_nameSEXP, SEXP faSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type dsn(dsnSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ex(exSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type fid_column_name(fid_column_nameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fa(faSEXP);
    rcpp_result_gen = Rcpp::wrap(gdal_dsn_read_fields_fa(dsn, layer, sql, ex, fid_column_name, fa));
    return rcpp_result_gen;
END_RCPP
}
// proj_to_wkt_cpp
CharacterVector proj_to_wkt_cpp(CharacterVector proj_str);
RcppExport SEXP _vapour_proj_to_wkt_cpp(SEXP proj_strSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type proj_str(proj_strSEXP);
    rcpp_result_gen = Rcpp::wrap(proj_to_wkt_cpp(proj_str));
    return rcpp_result_gen;
END_RCPP
}
// vapour_driver_cpp
Rcpp::CharacterVector vapour_driver_cpp(Rcpp::CharacterVector dsource);
RcppExport SEXP _vapour_vapour_driver_cpp(SEXP dsourceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsource(dsourceSEXP);
    rcpp_result_gen = Rcpp::wrap(vapour_driver_cpp(dsource));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vapour_geometry_cpp_limit_skip", (DL_FUNC) &_vapour_geometry_cpp_limit_skip, 7},
    {"_vapour_geometry_cpp", (DL_FUNC) &_vapour_geometry_cpp, 6},
    {"_vapour_register_gdal_cpp", (DL_FUNC) &_vapour_register_gdal_cpp, 0},
    {"_vapour_cleanup_gdal_cpp", (DL_FUNC) &_vapour_cleanup_gdal_cpp, 0},
    {"_vapour_version_gdal_cpp", (DL_FUNC) &_vapour_version_gdal_cpp, 0},
    {"_vapour_drivers_list_gdal_cpp", (DL_FUNC) &_vapour_drivers_list_gdal_cpp, 0},
    {"_vapour_proj_to_wkt_gdal_cpp", (DL_FUNC) &_vapour_proj_to_wkt_gdal_cpp, 1},
    {"_vapour_driver_gdal_cpp", (DL_FUNC) &_vapour_driver_gdal_cpp, 1},
    {"_vapour_layer_names_gdal_cpp", (DL_FUNC) &_vapour_layer_names_gdal_cpp, 1},
    {"_vapour_feature_count_gdal_cpp", (DL_FUNC) &_vapour_feature_count_gdal_cpp, 4},
    {"_vapour_read_fields_gdal_cpp", (DL_FUNC) &_vapour_read_fields_gdal_cpp, 7},
    {"_vapour_read_geometry_gdal_cpp", (DL_FUNC) &_vapour_read_geometry_gdal_cpp, 8},
    {"_vapour_read_names_gdal_cpp", (DL_FUNC) &_vapour_read_names_gdal_cpp, 6},
    {"_vapour_projection_info_gdal_cpp", (DL_FUNC) &_vapour_projection_info_gdal_cpp, 3},
    {"_vapour_report_fields_gdal_cpp", (DL_FUNC) &_vapour_report_fields_gdal_cpp, 3},
    {"_vapour_vsi_list_gdal_cpp", (DL_FUNC) &_vapour_vsi_list_gdal_cpp, 1},
    {"_vapour_sds_list_gdal_cpp", (DL_FUNC) &_vapour_sds_list_gdal_cpp, 1},
    {"_vapour_warp_in_memory_gdal_cpp", (DL_FUNC) &_vapour_warp_in_memory_gdal_cpp, 6},
    {"_vapour_raster_info_gdal_cpp", (DL_FUNC) &_vapour_raster_info_gdal_cpp, 2},
    {"_vapour_raster_gcp_gdal_cpp", (DL_FUNC) &_vapour_raster_gcp_gdal_cpp, 1},
    {"_vapour_raster_io_gdal_cpp", (DL_FUNC) &_vapour_raster_io_gdal_cpp, 4},
    {"_vapour_vapour_geom_name_cpp", (DL_FUNC) &_vapour_vapour_geom_name_cpp, 4},
    {"_vapour_gdal_read_fids_all", (DL_FUNC) &_vapour_gdal_read_fids_all, 4},
    {"_vapour_gdal_read_fids_ij", (DL_FUNC) &_vapour_gdal_read_fids_ij, 5},
    {"_vapour_gdal_read_fids_ia", (DL_FUNC) &_vapour_gdal_read_fids_ia, 5},
    {"_vapour_gdal_dsn_read_geom_all", (DL_FUNC) &_vapour_gdal_dsn_read_geom_all, 5},
    {"_vapour_gdal_dsn_read_geom_ij", (DL_FUNC) &_vapour_gdal_dsn_read_geom_ij, 6},
    {"_vapour_gdal_dsn_read_geom_ia", (DL_FUNC) &_vapour_gdal_dsn_read_geom_ia, 6},
    {"_vapour_gdal_dsn_read_geom_fa", (DL_FUNC) &_vapour_gdal_dsn_read_geom_fa, 6},
    {"_vapour_gdal_dsn_read_fields_all", (DL_FUNC) &_vapour_gdal_dsn_read_fields_all, 5},
    {"_vapour_gdal_dsn_read_fields_ij", (DL_FUNC) &_vapour_gdal_dsn_read_fields_ij, 6},
    {"_vapour_gdal_dsn_read_fields_ia", (DL_FUNC) &_vapour_gdal_dsn_read_fields_ia, 6},
    {"_vapour_gdal_dsn_read_fields_fa", (DL_FUNC) &_vapour_gdal_dsn_read_fields_fa, 6},
    {"_vapour_proj_to_wkt_cpp", (DL_FUNC) &_vapour_proj_to_wkt_cpp, 1},
    {"_vapour_vapour_driver_cpp", (DL_FUNC) &_vapour_vapour_driver_cpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_vapour(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
