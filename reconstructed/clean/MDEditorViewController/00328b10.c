// Function: FUN_00328b10
// Address: 00328b10
// Size: 1489 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_00328b10(uint64_t param_1,float *param_2)

{
  uint64_t *puVar1;
  void*puVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  char cVar7;
  int iVar8;
  int64_t lVar9;
  int iVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar13;
  int iVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t uVar16;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint32_t local_d8;
  uint8_t local_88 [16];
  uint64_t local_78;
  uint64_t uStack_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  cVar7 = (**(code **)(*this_ptr + 0xa40))();
  if (cVar7 == '\0') {
    FUN_01a36f10(extraout_XMM0_Qa,param_2);
    return;
  }
  fVar3 = *param_2;
  fVar4 = param_2[2];
  lVar12 = this_ptr[0x23];
  FUN_01cfc9f0();
  local_68 = local_58;
  local_60 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  FUN_01d488d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e710();
  lVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  (**(code **)(*this_ptr + 0xa58))();
  lVar9 = local_58;
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00328f3b;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == 0) goto LAB_00328f3b;
  auVar17 = ZEXT416((uint)((float)((uint)(fVar3 + g_02390d00) & g_023945e0 | g_02394dc8) +
                          fVar3 + g_02390d00));
  auVar17 = roundss(auVar17,auVar17,0xb);
  auVar19._0_12_ = ZEXT812(0);
  auVar19._12_4_ = 0;
  auVar19 = blendps(auVar19,auVar17,1);
  auVar17 = ZEXT416((uint)((float)(g_023945e0 & (uint)(fVar4 + g_02390d34) | g_02394dc8) +
                          fVar4 + g_02390d34));
  auVar17 = roundss(auVar17,auVar17,0xb);
  insertps(auVar17,(int)lVar12,0x10);
  local_50 = '\0';
  local_58 = 0;
  local_48 = lVar9;
  local_40 = 0xffffffff;
  local_38 = 0;
  while( true ) {
    lVar9 = (int64_t)(int)local_40;
    iVar14 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar14);
    if (*(int *)(local_48 + 0xc) <= iVar14) break;
    local_58 = *(int64_t *)(*(int64_t *)(local_48 + 0x10) + 8 + lVar9 * 8);
    cVar7 = (**(code **)(*this_ptr + 0xa60))(*(int64_t *)(local_48 + 0x10),&local_78);
    if (cVar7 == '\0') {
LAB_00328da0:
    }
    else {
      local_78 = local_78 & 0xffffffff;
      uStack_70 = CONCAT44((int)lVar12,(uint32_t)uStack_70);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uStack_70;
      local_d8 = auVar19._0_4_;
      uVar13 = FUN_00d05360(local_78,uStack_70,local_d8);
      uStack_70 = auVar17._0_8_;
      local_78 = uVar13;
      if (auVar17._0_4_ <= g_0239424c) goto LAB_00328da0;
      if (lVar6 == 0) {
LAB_00328d70:
        iVar14 = *(int *)(lVar6 + 0x18);
        FUN_00c8e340(uVar13,1);
        puVar1 = (uint64_t *)(*(int64_t *)(lVar6 + 0x10) + (int64_t)iVar14);
        *puVar1 = local_78;
        puVar1[1] = uStack_70;
        goto LAB_00328da0;
      }
      iVar14 = -1;
      lVar9 = 0;
      do {
        iVar14 = iVar14 + 1;
        iVar8 = *(int *)(lVar6 + 0x18);
        iVar10 = iVar8 + 0xf;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar10 >> 4 <= iVar14) goto LAB_00328d70;
        uVar13 = *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar9);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar13;
        cVar7 = FUN_00d054a0(iVar10 >> 4,uVar13,(int)local_78,uStack_70);
        lVar9 = lVar9 + 0x10;
        uVar13 = extraout_XMM0_Qa_00;
      } while (cVar7 == '\0');
      uVar16 = FUN_00d052e0();
      puVar2 = (void*)(*(int64_t *)(lVar6 + 0x10) + -0x10 + lVar9);
      *puVar2 = uVar16;
      puVar2[1] = auVar18._0_8_;
    }
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar14 = -local_40._4_4_;
      }
      else {
        iVar14 = (int)local_40 - local_40._4_4_;
        local_40._4_4_ = (int)((uint64_t)local_40 >> 0x20);
        local_40 = CONCAT44(local_40._4_4_,iVar14);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar14 = 0;
      }
      local_40 = CONCAT44(iVar14,(int)local_40);
    }
  }
  FUN_0032bfd0();
  FUN_00d50b20();
LAB_00328f3b:
  iVar14 = *(int *)(lVar6 + 0x18);
  iVar8 = iVar14 + 0xf;
  if (-1 < iVar14) {
    iVar8 = iVar14;
  }
  if (0xf < iVar14) {
    uVar13 = (uint64_t)((iVar8 >> 4) - 1);
    uVar15 = (uint64_t)(uint)(iVar8 >> 4);
LAB_00328f60:
    if (1 < (int64_t)uVar15) {
      uVar15 = uVar15 - 1;
      local_88._8_8_ = 0;
      local_88._0_8_ =
           *(uint64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + (uVar15 & 0xffffffff) * 0x10);
      uVar13 = uVar13 - 1;
      uVar11 = 0;
      while (cVar7 = FUN_00d054a0(), cVar7 == '\0') {
        if (uVar13 == uVar11) goto LAB_00328f60;
        uVar11 = uVar11 + 1;
      }
      uVar16 = FUN_00d052e0();
      puVar2 = (void*)(*(int64_t *)(lVar6 + 0x10) + (uVar11 & 0xffffffff) * 0x10);
      *puVar2 = uVar16;
      puVar2[1] = local_88._0_8_;
      FUN_00e7b4e0();
      FUN_00c921e0();
      goto LAB_00328f60;
    }
  }
  iVar14 = -1;
  lVar12 = 8;
  while( true ) {
    iVar14 = iVar14 + 1;
    iVar8 = *(int *)(lVar6 + 0x18);
    iVar10 = iVar8 + 0xf;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    if (iVar10 >> 4 <= iVar14) break;
    uVar16 = *(void*)(*(int64_t *)(lVar6 + 0x10) + -8 + lVar12);
    uVar5 = *(void*)(*(int64_t *)(lVar6 + 0x10) + lVar12);
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))
              (CONCAT44((int)((uint64_t)uVar16 >> 0x20),(float)uVar16 + g_02390d00),
               CONCAT44((int)((uint64_t)uVar5 >> 0x20),(float)uVar5 + g_02390d34));
    lVar12 = lVar12 + 0x10;
    FUN_01d48390();
  }
  FUN_00d50b20();
  return;
}

