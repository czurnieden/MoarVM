void MVM_spesh_deopt_all(MVMThreadContext *tc);
void MVM_spesh_deopt_one(MVMThreadContext *tc, MVMuint32 deopt_target);
void MVM_spesh_deopt_one_direct(MVMThreadContext *tc, MVMuint32 deopt_offset,
                                MVMuint32 deopt_target);
MVMint32 MVM_spesh_deopt_find_inactive_frame_deopt_idx(MVMThreadContext *tc, MVMFrame *f);
