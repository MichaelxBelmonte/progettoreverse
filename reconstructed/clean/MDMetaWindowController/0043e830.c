// Function: FUN_0043e830
// Address: 0043e830
// Size: 909 bytes
// Class: MDMetaWindowController

void FUN_0043e830(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar10;
  uint32_t extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar11;
  uint32_t extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar12;
  uint64_t in_XMM1_Qb;
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  uint8_t local_68 [40];
  int64_t *local_40;
  char local_38;
  
  if ((((*(char *)((int64_t)this_ptr + 0x139) == '\0') || (cVar4 = FUN_0043e2f0(), cVar4 == '\0'))
      || (iVar5 = FUN_01d3a5a0(), iVar5 != 1)) || (iVar5 = FUN_01d3b630(), iVar5 != 1)) {
    FUN_01e459c0();
  }
  else {
    FUN_0043e450();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00b34cb0();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b00();
    }
    FUN_01e42030();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01e3f820();
    local_98 = (float)param_2;
    fStack_94 = (float)((uint64_t)param_2 >> 0x20);
    fStack_90 = (float)in_XMM1_Qb;
    fStack_8c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
    uVar7 = (**(code **)(*local_40 + 0x528))();
    uVar8 = FUN_01d3abf0();
    local_68._8_4_ = fStack_90;
    local_68._0_8_ = param_2;
    local_68._12_4_ = fStack_8c;
    auVar13 = local_68._0_16_;
LAB_0043e990:
    (**(code **)(*this_ptr + 0x658))();
    plVar1 = (int64_t *)*arg1;
    local_88 = auVar13._0_4_;
    fStack_84 = auVar13._4_4_;
    if (plVar1 == local_40) {
      if (((char)arg1[1] != '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0043e9eb;
      if (local_38 != '\0') goto LAB_0043e9e2;
      FUN_00d50b00();
LAB_0043ea2b:
      *(void*)(arg1 + 1) = 1;
      lVar3 = *arg1;
    }
    else {
      lVar3 = arg1[1];
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_40;
        if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0043ea2b;
      }
      *arg1 = (int64_t)local_40;
      if (((char)lVar3 != '\0') && (plVar1 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0043e9e2:
      *(void*)(arg1 + 1) = 1;
      local_38 = '\0';
LAB_0043e9eb:
      lVar3 = *arg1;
    }
    if (lVar3 != 0) {
      iVar5 = FUN_01d3a5a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar5 == 6) goto LAB_0043eb63;
      iVar5 = FUN_01d3a5a0();
      if (iVar5 == 5) {
        uVar9 = FUN_01d3abf0();
        fVar6 = ((float)uVar9 - (float)uVar8) + local_98;
        fVar10 = ((float)((uint64_t)uVar9 >> 0x20) - (float)((uint64_t)uVar8 >> 0x20)) + fStack_94
        ;
        fVar11 = (extraout_XMM0_Dc_01 - extraout_XMM0_Dc_00) + fStack_90;
        fVar12 = (extraout_XMM0_Dd_01 - extraout_XMM0_Dd_00) + fStack_8c;
        auVar13._8_4_ = extraout_XMM0_Dc;
        auVar13._0_8_ = uVar7;
        auVar13._12_4_ = extraout_XMM0_Dd;
        if (fVar6 < (float)uVar7) {
          auVar14 = blendps(local_68._0_16_,auVar13,0xd);
        }
        else {
          auVar14._4_4_ = fVar10;
          auVar14._0_4_ = fVar6;
          auVar14._8_4_ = fVar11;
          auVar14._12_4_ = fVar12;
          auVar14 = blendps(local_68._0_16_,auVar14,0xd);
        }
        auVar15._4_4_ = fVar10;
        auVar15._0_4_ = fVar6;
        auVar15._8_4_ = fVar11;
        auVar15._12_4_ = fVar12;
        auVar15 = blendps(auVar14,auVar15,2);
        iVar5 = -(uint)(fVar10 < (float)((uint64_t)uVar7 >> 0x20));
        auVar13 = blendps(auVar14,auVar13,2);
        auVar2._4_4_ = iVar5;
        auVar2._0_4_ = iVar5;
        auVar2._8_4_ = iVar5;
        auVar2._12_4_ = iVar5;
        local_68._0_16_ = blendvps(auVar15,auVar13,auVar2);
        fVar6 = local_68._0_4_;
        if (((fVar6 != local_88) || (NAN(fVar6) || NAN(local_88))) ||
           (fStack_84 != (float)local_68._4_4_)) {
          (**(code **)(*local_40 + 0x60))(fVar6);
        }
        FUN_00da68a0((int)g_02391030);
        FUN_01e3f820();
      }
      goto LAB_0043e990;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0043eb63:
    if ((((float)local_68._0_4_ != local_88) || (NAN((float)local_68._0_4_) || NAN(local_88))) ||
       (fStack_84 != (float)local_68._4_4_)) {
      (**(code **)(*local_40 + 0x60))();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}

