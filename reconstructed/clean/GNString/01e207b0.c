// Function: FUN_01e207b0
// Address: 01e207b0
// Size: 1488 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e207b0(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  bool bVar2;
  uint8_t uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int64_t this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint8_t uVar10;
  bool bVar11;
  float fVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar15;
  float fVar16;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  fVar16 = (float)((uint64_t)param_2 >> 0x20);
  fVar15 = (float)param_2;
  if (0 < *(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc)) {
    uVar9 = 0;
    bVar1 = false;
    plVar8 = (int64_t *)0x0;
    do {
      fVar12 = (float)FUN_01e21f60();
      FUN_01cb4790();
      uVar10 = 0;
      if (uVar9 == *(uint *)(this_ptr + 0xc)) {
        uVar10 = *(void*)(this_ptr + 0x32);
      }
      uVar3 = FUN_01e26480();
      (**(code **)(*local_48 + 0x3f0))(fVar12,fVar15,uVar10,uVar3);
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar7 = plVar8;
      bVar2 = bVar1;
      if ((((*(char *)(this_ptr + 0x33) == '\0') || (uVar9 != *(uint *)(this_ptr + 0xc))) ||
          (*(uint *)(this_ptr + 0xc) == 0xffffffff)) || (*(int *)(this_ptr + 0x10) == -1)) {
LAB_01e20980:
        FUN_01e26050();
        if (local_48 == plVar8) {
          if ((!bVar1) && (plVar8 != (int64_t *)0x0)) {
            bVar2 = true;
            if (local_40 != '\0') goto LAB_01e20a36;
            FUN_00d50b00();
            bVar2 = true;
          }
        }
        else {
          if (local_40 != '\0') {
            bVar2 = true;
            plVar7 = local_48;
            if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01e20a36;
          }
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          plVar7 = local_48;
          if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01e26090();
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (int64_t *)0x0) goto LAB_01e20980;
        if ((*(int *)(this_ptr + 0xc) == -1) || (*(int *)(this_ptr + 0x10) == -1)) {
          local_50 = '\0';
          local_58 = (int64_t *)0x0;
        }
        else {
          FUN_01e26090();
        }
        FUN_01e26050();
        if (local_48 == plVar8) {
          if ((!bVar1) && (local_48 != (int64_t *)0x0)) {
            if (local_40 == '\0') {
              FUN_00d50b00();
LAB_01e20d15:
              bVar11 = local_40 != '\0';
              goto joined_r0x01e20d19;
            }
            goto LAB_01e20cbe;
          }
          if (local_40 != '\0') {
LAB_01e20d1b:
            plVar7 = plVar8;
            bVar2 = bVar1;
            if (local_48 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar7 = local_48;
          bVar2 = true;
          if (bVar1) {
            if (plVar8 != (int64_t *)0x0) {
              FUN_00d50b20();
              plVar8 = local_48;
              goto LAB_01e20d15;
            }
            bVar11 = false;
            plVar8 = local_48;
joined_r0x01e20d19:
            bVar1 = true;
            plVar7 = plVar8;
            bVar2 = bVar1;
            if (bVar11) goto LAB_01e20d1b;
          }
        }
        else {
          plVar7 = local_48;
          if ((bVar1) && (plVar8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
LAB_01e20cbe:
          local_40 = '\0';
          bVar2 = true;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01e20a36:
      bVar1 = bVar2;
      uVar13 = FUN_01d526f0();
      uVar14 = FUN_01d526f0();
      auVar18._0_4_ = fVar15 - (float)uVar14;
      auVar18._4_4_ = fVar16 - (float)((uint64_t)uVar14 >> 0x20);
      auVar18._8_4_ = in_XMM1_Dc - extraout_XMM0_Dc_00;
      auVar18._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd_00;
      auVar19._4_4_ = fVar16 - (float)((uint64_t)uVar13 >> 0x20);
      auVar19._0_4_ = fVar15 - (float)uVar13;
      auVar19._8_4_ = in_XMM1_Dc - extraout_XMM0_Dc;
      auVar19._12_4_ = in_XMM1_Dd - extraout_XMM0_Dd;
      auVar19 = blendps(auVar18,auVar19,0xd);
      fVar17 = auVar19._0_4_ * g_023945d0;
      bVar4 = FUN_01e26480();
      cVar5 = FUN_01e26480();
      fVar15 = g_02390124;
      if (cVar5 == '\0') {
        fVar15 = g_0239011c;
      }
      in_XMM1_Dd = 0.0;
      in_XMM1_Dc = 0.0;
      fVar16 = 0.0;
      FUN_01d49110(fVar12 + fVar17,bVar4 ^ 3);
      iVar6 = FUN_01e26080();
      if (iVar6 != 0) {
        fVar12 = (float)FUN_01e21f60();
        FUN_01cb4790();
        (**(code **)(*local_58 + 0x390))();
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01d488d0();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01cb4790();
        fVar12 = fVar12 + fVar15;
        fVar16 = 0.0;
        in_XMM1_Dc = 0.0;
        in_XMM1_Dd = 0.0;
        fVar15 = g_02390d34;
        FUN_01cb3a30(fVar12 + g_023b5de0 + g_02421800,3);
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar9 = uVar9 + 1;
      plVar8 = plVar7;
    } while ((int64_t)uVar9 < (int64_t)*(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc));
    if ((bVar1) && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}

