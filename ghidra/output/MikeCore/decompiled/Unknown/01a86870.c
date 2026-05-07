// Function: FUN_01a86870
// Address: 01a86870
// Size: 2220 bytes
// Class: Unknown


void FUN_01a86870(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined8 in_XMM1_Qb;
  undefined4 uVar15;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  double local_50;
  longlong *local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  fVar14 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x2e] == 0) {
    return;
  }
  FUN_01989f80();
  lVar1 = unaff_RDI[0x2e];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0039e8b0();
  if (local_68 == '\0') {
    if (local_70 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  cVar3 = (**(code **)("/System/Library/Frameworks/ImageIO.framework/Versions/A/ImageIO" +
                      *local_40 + 8))();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)unaff_RDI[0x33] == '\0') {
LAB_01a86b92:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = (double)FUN_0125a280();
    if ((char)unaff_RDI[0x33] == '\0') goto LAB_01a86df6;
LAB_01a86be5:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar7 = local_70 != 0;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01a86df6;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_01259520();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_012f9490();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (dVar10 <= dVar11) {
      dVar11 = dVar10;
    }
    iVar2 = (int)unaff_RDI[0x30];
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_40 == (longlong *)0x0) {
      bVar7 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      bVar7 = local_70 != 0;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar7) goto LAB_01a86b92;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_0125a280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_50 = (double)FUN_012f7cb0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 <= dVar10) {
      local_50 = dVar10;
    }
    if ((char)unaff_RDI[0x33] != '\0') goto LAB_01a86be5;
LAB_01a86df6:
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_01259520();
    iVar2 = (int)unaff_RDI[0x30];
  }
  if (iVar2 != 0) {
    if (cVar3 == '\0') {
      FUN_01a845d0();
      FUN_01d488d0();
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar2 == 1) {
      FUN_01a843c0();
      FUN_01d488d0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (iVar2 == 2) {
      FUN_01a84470();
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x4d8))();
    FUN_01989f80();
    uVar8 = (**(code **)(*local_40 + 0x938))(local_50);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01989f80();
    uVar9 = (**(code **)(*local_40 + 0x938))(dVar11);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    roundss(ZEXT816(0),ZEXT416(uVar8),10);
    roundss(ZEXT416(uVar9),ZEXT416(uVar9),9);
    auVar12._4_4_ = fVar14;
    auVar12._0_4_ = fVar14;
    auVar12._8_4_ = uVar15;
    auVar12._12_4_ = uVar15;
    auVar13._4_12_ = auVar12._4_12_;
    auVar13._0_4_ = fVar14 * DAT_0239011c;
    roundss(auVar13,auVar13,9);
    FUN_01d48b40();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
    iVar2 = (int)unaff_RDI[0x30];
    if (iVar2 == 2) {
      FUN_01a85710(cVar3,1);
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_01a870ae;
    }
    if (iVar2 == 1) {
      FUN_01a84ac0(1,1,cVar3);
      FUN_01a85710(cVar3,0);
      return;
    }
    if (iVar2 != 0) {
      return;
    }
  }
  uVar6 = 1;
  uVar5 = 0;
LAB_01a870ae:
  FUN_01a84ac0(uVar5,uVar6,cVar3);
  return;
}


