// Function: FUN_01e20270
// Address: 01e20270
// Size: 863 bytes
// Class: Unknown

void FUN_01e20270(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int in_EDX;
  int64_t *plVar6;
  void*arg1;
  int64_t this_ptr;
  int iVar7;
  int64_t *plVar8;
  uint32_t extraout_XMM0_Da;
  float fVar9;
  uint32_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float in_XMM1_Dc;
  float fVar17;
  float in_XMM1_Dd;
  float fVar18;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_a8;
  char local_a0;
  int64_t *local_40;
  char local_38;
  
  fVar15 = (float)((uint64_t)param_2 >> 0x20);
  fVar13 = (float)param_2;
  lVar1 = *(int64_t *)
           (*(int64_t *)(*(int64_t *)(this_ptr + 0x18) + 0x10) + (int64_t)in_EDX * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  bVar2 = false;
  plVar8 = (int64_t *)0x0;
  iVar7 = 0;
  do {
    iVar5 = FUN_01e26080();
    if (iVar5 <= iVar7) {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      return;
    }
    fVar9 = (float)FUN_01e21df0(extraout_XMM0_Da,iVar7);
    FUN_01e26090(fVar9,iVar7);
    cVar4 = FUN_01e26480();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cb4790();
    uVar10 = (**(code **)(*local_40 + 0x3f0))
                       (fVar9,fVar13,iVar7 == *(int *)(this_ptr + 0x10),cVar4);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    FUN_01e26090(uVar10,iVar7);
    FUN_01e26050();
    if (local_40 == plVar8) {
      if ((!bVar2) && (local_40 != (int64_t *)0x0)) {
        plVar6 = plVar8;
        if (local_38 != '\0') goto LAB_01e20413;
        FUN_00d50b00();
LAB_01e20480:
        bVar2 = true;
      }
      plVar6 = plVar8;
      bVar3 = bVar2;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar6 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar8 = local_40;
          goto LAB_01e20480;
        }
      }
      else {
        if ((bVar2) && (plVar8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e20413:
        local_38 = '\0';
        bVar3 = true;
      }
    }
    bVar2 = bVar3;
    plVar8 = plVar6;
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_01d526f0();
    uVar12 = FUN_01d526f0();
    fVar14 = fVar13 - (float)uVar11;
    fVar16 = fVar15 - (float)((uint64_t)uVar11 >> 0x20);
    fVar17 = in_XMM1_Dc - extraout_XMM0_Dc;
    fVar18 = in_XMM1_Dd - extraout_XMM0_Dd;
    auVar19._0_4_ = fVar13 - (float)uVar12;
    auVar19._4_4_ = fVar15 - (float)((uint64_t)uVar12 >> 0x20);
    auVar19._8_4_ = in_XMM1_Dc - extraout_XMM0_Dc_00;
    auVar19._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd_00;
    auVar20._4_4_ = fVar16;
    auVar20._0_4_ = fVar14;
    auVar20._8_4_ = fVar17;
    auVar20._12_4_ = fVar18;
    auVar20 = blendps(auVar19,auVar20,0xd);
    if (cVar4 == '\0') {
      fVar16 = 0.0;
      fVar17 = 0.0;
      fVar18 = 0.0;
      fVar14 = g_0239011c;
      FUN_01d49110(fVar9 + auVar20._0_4_ * g_023945d0,3);
    }
    else {
      (**(code **)(*(int64_t *)*arg1 + 0x400))();
    }
    iVar7 = iVar7 + 1;
    fVar13 = fVar14;
    fVar15 = fVar16;
    in_XMM1_Dc = fVar17;
    in_XMM1_Dd = fVar18;
  } while( true );
}

