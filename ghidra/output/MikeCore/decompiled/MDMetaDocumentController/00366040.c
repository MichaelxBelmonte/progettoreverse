// Function: FUN_00366040
// Address: 00366040
// Size: 3857 bytes
// Class: MDMetaDocumentController
// String references:
//   "MDMetaDocumentController"


/* WARNING: Removing unreachable block (ram,0x003668eb) */
/* WARNING: Removing unreachable block (ram,0x003668f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00366040(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  char *pcVar9;
  longlong *unaff_RDI;
  longlong **pplVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  char local_108;
  undefined7 uStack_107;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_68;
  char local_60;
  char local_58 [8];
  longlong *local_50;
  bool local_48;
  longlong *local_40;
  char local_38 [8];
  
  FUN_0028b3b0();
  FUN_00365f50();
  FUN_00bebd80();
  FUN_00d6f370();
  plVar4 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_013933d0();
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  uVar12 = FUN_00b7b830();
  if (plVar3 != (longlong *)0x0) {
    uVar12 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  lVar2 = DAT_026f6e78;
  if (DAT_026f6e78 != 0) {
    uVar12 = FUN_00d50b00();
  }
  cVar6 = FUN_00d70f90(uVar12,0);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar6 != '\0') {
    uVar12 = FUN_01f28c30();
    local_1d8 = DAT_026dea80;
    if (DAT_026dea80 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_1d0 = '\x01';
    FUN_01d5e6e0(uVar12,&local_1d8);
    plVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_01d65ea0();
      local_1c8 = plVar3;
      local_1c0 = '\0';
      uVar12 = FUN_01d5e2e0();
      if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar13 = FUN_01d65ea0();
      local_1b8 = DAT_026fb800;
      if (DAT_026fb800 != 0) {
        uVar13 = FUN_00d50b00();
      }
      lVar2 = DAT_026fb808;
      local_1b0 = '\x01';
      if (DAT_026fb808 != 0) {
        uVar13 = FUN_00d50b00();
      }
      local_1a8 = lVar2;
      local_1a0 = '\x01';
      uVar13 = FUN_01d64ce0(uVar13,&local_1a8);
      plVar3 = local_50;
      if (local_48 == false) {
        if (local_50 != (longlong *)0x0) {
          uVar13 = FUN_00d50b00();
        }
      }
      else {
        local_48 = false;
      }
      FUN_01d5d7f0(uVar13,uVar12);
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  FUN_01da4890();
  FUN_01f28c30();
  plVar3 = local_50;
  if (local_48 == false) {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  FUN_01da8a40();
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x720))();
  plVar3 = local_40;
  uVar12 = FUN_01f28c30();
  local_198 = DAT_026fb838;
  if (DAT_026fb838 != 0) {
    uVar12 = FUN_00d50b00();
  }
  local_190 = '\x01';
  FUN_01d5e6e0(uVar12,&local_198);
  pplVar10 = &local_50;
  FUN_01d64cb0();
  plVar1 = local_50;
  if (local_48 == false) {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  (**(code **)(*plVar3 + 0x638))();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (CONCAT71(uStack_107,local_108) != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_02703ad8;
  if (DAT_02703ad8 != 0) {
    FUN_00d50b00();
  }
  local_188 = lVar2;
  local_180 = '\x01';
  local_178 = 0;
  local_170 = '\0';
  FUN_00d704d0(&local_178,&local_188);
  plVar3 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  FUN_00b160d0();
  plVar1 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  FUN_00367bf0();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00b160d0();
  (**(code **)(*local_40 + 0x368))();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = (**(code **)(*unaff_RDI + 0x4b0))();
  lVar2 = DAT_02703ae0;
  if (*(int *)(unaff_RDI[0xd] + 0xc) != 0) {
    if (DAT_02703ae0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_168 = lVar2;
    local_160 = '\x01';
    cVar6 = FUN_00d70f90(uVar12,0);
    if (cVar6 == '\0') {
      cVar6 = '\0';
    }
    else {
      FUN_00d23310();
      plVar1 = local_40;
      pplVar8 = (longlong **)local_38;
      if (local_38[0] == '\0') {
        pplVar8 = pplVar10;
      }
      local_50 = (longlong *)CONCAT71(local_50._1_7_,local_38[0]);
      *(undefined1 *)pplVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      cVar6 = (**(code **)(*plVar1 + 0x398))();
      if (((char)local_50 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') {
      FUN_00d23310();
      plVar1 = local_40;
      pplVar8 = (longlong **)local_38;
      if (local_38[0] == '\0') {
        pplVar8 = pplVar10;
      }
      local_50 = (longlong *)CONCAT71(local_50._1_7_,local_38[0]);
      *(undefined1 *)pplVar8 = 0;
      if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_50 == '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x528))();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  (**(code **)(*unaff_RDI + 0x628))();
  FUN_01f30840();
  FUN_00d23310();
  plVar1 = local_40;
  bVar11 = local_38[0] == '\0';
  local_50 = local_40;
  if (bVar11) {
    local_48 = false;
  }
  else {
    local_48 = true;
    local_38[0] = '\0';
  }
  local_48 = !bVar11;
  if ((DAT_026fbe40 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0271be08 = FUN_000838a0();
    _DAT_0271bdf0 = "MDMetaDocumentController";
    _DAT_0271bdf8 = 0x60;
    _DAT_0271be00 = FUN_002a0ad0;
    _DAT_0271be10 = 0;
    uRam000000000271be18 = 0;
    _DAT_0271be20 = 0;
    _DAT_0271be98 = 0;
    uRam000000000271bea0 = 0;
    _DAT_0271bea8 = 0;
    DAT_0271beaa = 1;
    _DAT_0271be28 = 0;
    uRam000000000271be30 = 0;
    _DAT_0271be38 = 0;
    uRam000000000271be40 = 0;
    _DAT_0271be48 = 0;
    uRam000000000271be50 = 0;
    _DAT_0271be58 = 0;
    uRam000000000271be60 = 0;
    _DAT_0271be68 = 0;
    uRam000000000271be70 = 0;
    _DAT_0271be78 = 0;
    uRam000000000271be80 = 0;
    _DAT_0271be88 = 0;
    uRam000000000271be90 = 0;
    DAT_0271beb3 = 0;
    _DAT_0271beab = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') {
      pplVar10 = (longlong **)&DAT_02802688;
    }
  }
  plVar1 = *pplVar10;
  local_108 = *(char *)(pplVar10 + 1);
  pplVar10 = pplVar10 + 1;
  if (local_108 == '\0') {
    pplVar10 = (longlong **)&local_108;
  }
  *(undefined1 *)pplVar10 = 0;
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x5e8))();
    if (local_50 == (longlong *)0x0) {
      bVar11 = false;
    }
    else {
      (**(code **)(*plVar1 + 0x5e8))();
      FUN_00d23310();
      plVar5 = local_40;
      pcVar9 = local_58;
      if (local_38[0] != '\0') {
        pcVar9 = local_38;
      }
      local_58[0] = local_38[0];
      *pcVar9 = '\0';
      if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar11 = plVar5 != (longlong *)0x0;
      if ((local_58[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (CONCAT71(local_68._1_7_,(char)local_68) != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      (**(code **)(*plVar1 + 0x5e8))();
      FUN_00d23310();
      plVar5 = local_40;
      pplVar10 = (longlong **)local_38;
      if (local_38[0] == '\0') {
        pplVar10 = &local_68;
      }
      local_68._0_1_ = local_38[0];
      *(undefined1 *)pplVar10 = 0;
      if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00654ff0();
      if (((char)local_68 != '\0') && (plVar5 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_013fd5b0();
  local_f0 = 0;
  (**(code **)(unaff_RDI[0x29] + 0x10))();
  FUN_00d50b00();
  local_f0 = '\x01';
  local_f8 = unaff_RDI + 0x29;
  FUN_013fdae0();
  if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
    (**(code **)(*local_f8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00b160d0();
    (**(code **)(*local_50 + 0x5e0))();
    plVar5 = local_40;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    cVar6 = (**(code **)(*plVar3 + 0x50))();
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar6 == '\0') {
      uVar12 = FUN_00d6f370();
      local_158 = DAT_02703ae8;
      if (DAT_02703ae8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_150 = '\x01';
      cVar6 = FUN_00d70f90(uVar12,1);
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 != '\0') {
        FUN_00d403d0();
        local_148 = DAT_02703af0;
        if (DAT_02703af0 != 0) {
          FUN_00d50b00();
        }
        local_140 = '\x01';
        FUN_00d50b00();
        local_138 = 0;
        local_130 = '\0';
        FUN_00d40470(&local_138,&stack0xffffffffffffff18,1,3);
        if ((local_130 != '\0') && (local_138 != 0)) {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar12 = FUN_00d6f370();
        local_128 = DAT_02703ae8;
        if (DAT_02703ae8 != 0) {
          uVar12 = FUN_00d50b00();
        }
        local_120 = '\x01';
        FUN_00d70ea0(uVar12,&local_128);
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      uVar12 = FUN_00d6f370();
      local_118 = DAT_02703ae8;
      if (DAT_02703ae8 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_110 = '\x01';
      FUN_00d70ea0(uVar12,&local_118);
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_108 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


