// Function: FUN_01c898c0
// Address: 01c898c0
// Size: 714 bytes
// Class: GNString


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01c898c0(float param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong *plVar6;
  pthread_key_t in_ECX;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  float fVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01c8b200();
  plVar6 = *(longlong **)(unaff_RDI + 0x140);
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c98e0();
  uVar9 = (**(code **)(*plVar6 + 0x390))();
  FUN_00d50b20();
  local_88 = (float)uVar9;
  uStack_84 = (uint)((ulonglong)uVar9 >> 0x20);
  uStack_80 = (uint)extraout_XMM0_Qb;
  uStack_7c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  auVar11._0_4_ = _DAT_023945e0 & (uint)local_88;
  auVar11._4_4_ = _UNK_023945e4 & uStack_84;
  auVar11._8_4_ = _UNK_023945e8 & uStack_80;
  auVar11._12_4_ = _UNK_023945ec & uStack_7c;
  auVar10._4_12_ = SUB1612(auVar11 | _DAT_023945f0,4);
  auVar10._0_4_ = SUB164(auVar11 | _DAT_023945f0,0) + local_88;
  auVar11 = roundss(auVar10,auVar10,0xb);
  fVar8 = (float)((uint)(auVar11._0_4_ - param_1) & _DAT_02390140);
  if (fVar8 <= DAT_02394298) {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar3 = FUN_016cad00();
    if (cVar3 == '\0') {
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_48 = '\0';
      local_50 = 0;
      plVar6 = &local_50;
      FUN_01703b00(plVar6,uVar4);
      lVar2 = local_40;
      pVar7 = (pthread_key_t)plVar6;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      plVar6 = (longlong *)FUN_00e8b990();
      uVar9 = extraout_XMM0_Qa;
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b00();
        cVar3 = FUN_00cb2340();
        if (cVar3 != '\0') {
          (**(code **)(*plVar6 + 0x3b8))();
        }
        uVar9 = FUN_00d50b20();
      }
      FUN_01c89130(uVar9,uVar4);
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar5 = _pthread_getspecific(in_ECX);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017022b0();
      if (*(longlong *)(unaff_RDI + 0x1a8) != 0) {
        FUN_01c4e030();
      }
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return fVar8 <= DAT_02394298;
}


