// Function: FUN_01e587b0
// Address: 01e587b0
// Size: 1881 bytes
// Class: GNStringTable
// String references:
//   "frame"

void FUN_01e587b0(void)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  void*puVar4;
  char cVar5;
  int64_t lVar6;
  uint64_t uVar7;
  void*puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char unaff_SIL;
  int64_t this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qa;
  double dVar14;
  double dVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint8_t auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint64_t local_a8;
  int64_t local_88;
  char local_80;
  char local_74;
  int64_t in_stack_ffffffffffffff90;
  char local_68;
  double local_58;
  double local_40;
  double local_38;
  
  uVar11 = *(uint *)(this_ptr + 0x3c);
  if ((*(char *)(this_ptr + 0x38) == '\0') && (*(char *)(this_ptr + 0x39) == '\0')) {
    uVar9 = 1;
  }
  else {
    uVar9 = 9;
  }
  uVar10 = 0;
  if ((uVar11 & 0x180) == 0) {
    uVar10 = uVar11 * 2 & 4 | uVar11 >> 1 & 2 | uVar9;
  }
  local_74 = unaff_SIL;
  (*PTR__objc_msgSend_024a9998)();
  puVar3 = PTR__NSZeroPoint_0249c210;
  cVar5 = _NSEqualPoints(g_02802fa0,SUB84(g_02802fa8,0),*(void*)PTR__NSZeroPoint_0249c210
                         ,*(void*)(PTR__NSZeroPoint_0249c210 + 8));
  puVar4 = PTR__objc_msgSend_024a9998;
  if (cVar5 == '\0') {
    local_a8 = g_02802fa0;
    local_38 = (double)*(float *)(this_ptr + 0x8c);
  }
  else {
    uVar13 = (*PTR__objc_msgSend_024a9998)();
    lVar6 = (*puVar4)(uVar13,0);
    if (lVar6 == 0) {
      local_58 = 0.0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_frame_026ca200);
    }
    g_02802fa0 = 0x4069000000000000;
    local_38 = (double)*(float *)(this_ptr + 0x8c);
    g_02802fa8 = (local_58 + g_02421cb8) - local_38;
    local_a8 = CONCAT44(_UNK_02421cd4,g_02421cd0);
  }
  dVar20 = g_02802fa8;
  dVar14 = (double)*(float *)(this_ptr + 0x88);
  _objc_alloc();
  puVar4 = PTR__objc_msgSend_024a9998;
  dVar21 = dVar14;
  dVar22 = local_38;
  dVar18 = dVar14;
  uVar13 = (*PTR__objc_msgSend_024a9998)(2,(uVar11 << 0x1f) >> 0x1b & uVar11 * 2 | uVar10,1)
  ;
  *(void*)(this_ptr + 0xa0) = uVar13;
  g_02802fa0 = *(void*)puVar3;
  g_02802fa8 = *(double *)(puVar3 + 8);
  dVar15 = (double)FUN_01f25900(*(void*)(this_ptr + 0x40));
  dVar19 = dVar18;
  dVar16 = (double)FUN_01f25900(*(void*)(this_ptr + 0x48));
  local_40 = dVar14;
  if (*(char *)(this_ptr + 0x38) != '\0') {
    dVar14 = dVar15;
    local_40 = dVar16;
  }
  dVar15 = local_38;
  if (*(char *)(this_ptr + 0x39) != '\0') {
    local_38 = dVar18;
    dVar15 = dVar19;
  }
  (*puVar4)(dVar14,SUB84(local_38,0),local_38,dVar15,local_a8,dVar20,dVar21,dVar22);
  uVar13 = (*puVar4)(local_40,SUB84(dVar15,0));
  uVar11 = *(uint *)(this_ptr + 0x3c);
  if ((uVar11 & 0x400) != 0) {
    (*puVar4)(uVar13,0);
    uVar13 = (*puVar4)(g_0238fee8,(int)g_0240e410);
    uVar13 = (*puVar4)(extraout_XMM0_Qa_01,uVar13);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  if ((uVar11 & 8) != 0) {
    uVar13 = (*PTR__objc_msgSend_024a9998)(uVar13,3);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  if ((uVar11 & 0x100) != 0) {
    uVar13 = (*puVar4)(uVar13,1);
    uVar13 = (*puVar4)(uVar13,0x65);
    uVar11 = *(uint *)(this_ptr + 0x3c);
  }
  uVar13 = (*puVar4)(uVar13,2);
  uVar13 = (*puVar4)(uVar13,uVar11 >> 4 & 1);
  uVar13 = (*puVar4)(uVar13,2);
  (*puVar4)(uVar13,~(byte)(uVar11 >> 4) & 1);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(uint64_t *)PTR__NSAppKitVersionNumber_0249c100;
  auVar17 = roundsd(auVar17,auVar17,9);
  if ((g_02421cc0 < auVar17._0_8_) && ((*(byte *)(this_ptr + 0x3d) & 2) != 0)) {
    (*PTR__objc_msgSend_024a9998)(auVar17._0_8_,0x80);
  }
  _objc_alloc();
  uVar7 = (*PTR__objc_msgSend_024a9998)();
  uVar13 = FUN_00d50b00();
  uVar13 = (*PTR__objc_msgSend_024a9998)(uVar13,&stack0xffffffffffffffb0);
  if (this_ptr != 0) {
    uVar13 = FUN_00d50b20();
  }
  if (g_028b9e10 == 0) {
    _objc_alloc();
    g_028b9e10 = (*PTR__objc_msgSend_024a9998)();
    uVar13 = extraout_XMM0_Qa_00;
  }
  uVar13 = (*puVar4)(uVar13,*(void*)(this_ptr + 0xa0));
  uVar13 = (*puVar4)(uVar13,uVar7);
  uVar13 = (*puVar4)(uVar13,0);
  (*puVar4)(uVar13,1);
  if (*(int64_t *)(this_ptr + 0x18) == 0) {
    FUN_01e590a0();
    FUN_00d50b00();
    if (g_028b9df0 != (void*)0x0) goto LAB_01e58d2f;
LAB_01e58d3c:
    FUN_00e8cb50();
    if (g_028b9df0 == (void*)0x0) {
      puVar8 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar8 = &g_0258a670;
      (*g_0258a688)();
      if (g_028b9df0 == puVar8) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar12 = g_028b9df0 != (void*)0x0;
        g_028b9df0 = puVar8;
        if (bVar12) {
          FUN_00d50b20();
        }
      }
      if (g_028b9df8 == '\0') {
        g_028b9df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_00e38130(0,0,1);
      g_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b9df9 = '\x01';
      FUN_00e8cb70();
    }
  }
  else {
    if (local_74 != '\0') {
      FUN_01e59140();
    }
    FUN_00d50b00();
    if (g_028b9df0 == (void*)0x0) goto LAB_01e58d3c;
LAB_01e58d2f:
    if (g_028b9df9 == '\0') goto LAB_01e58d3c;
  }
  if (*(int64_t *)(this_ptr + 0xa0) == 0) goto LAB_01e58ee7;
  FUN_01e583a0();
  if (local_68 == '\0') {
    if (in_stack_ffffffffffffff90 != 0) {
      FUN_00d50b00();
      goto LAB_01e58e45;
    }
  }
  else if (in_stack_ffffffffffffff90 != 0) {
LAB_01e58e45:
    FUN_00d50b20();
    goto LAB_01e58ee7;
  }
  uVar13 = FUN_00dd6a00();
  if ((local_68 == '\0') && (in_stack_ffffffffffffff90 != 0)) {
    uVar13 = FUN_00d50b00();
  }
  local_80 = '\0';
  local_88 = in_stack_ffffffffffffff90;
  FUN_01e5fa90(uVar13,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (in_stack_ffffffffffffff90 != 0) {
    FUN_00d50b20();
  }
LAB_01e58ee7:
  FUN_00d50b20();
  FUN_01e594e0();
  return;
}

