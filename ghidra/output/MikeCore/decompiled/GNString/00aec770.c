// Function: FUN_00aec770
// Address: 00aec770
// Size: 1420 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00aec770(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00aeb2e0();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_00aecb55;
    FUN_00d50b00();
    iVar3 = (int)plVar6[3];
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_00aecb55;
    iVar3 = (int)local_40[3];
  }
  if ((0x10 < iVar3) && (*(undefined1 (*) [16])plVar6[2] == _DAT_02765560)) {
    FUN_00c8e2b0(0,iVar3 + -0x10);
    plVar4 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (longlong *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
        (local_40 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    uVar7 = FUN_00c92170();
    if (plVar6 == plVar4) {
      if (plVar4 != (longlong *)0x0) {
        uVar7 = FUN_00d50b20();
      }
    }
    else {
      uVar7 = FUN_00d50b20();
      plVar6 = plVar4;
    }
    local_90 = '\0';
    local_98 = plVar6;
    FUN_00bc0e10(uVar7,&local_98);
    local_58 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      uVar7 = (**(code **)(*unaff_RDI + 0x3a8))();
      local_88 = DAT_02765240;
      if (DAT_02765240 != (longlong *)0x0) {
        uVar7 = FUN_00d50b00();
      }
      local_80 = '\x01';
      FUN_000175c0(uVar7,&local_88);
      plVar4 = local_40;
      if ((DAT_026fdd40 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026cd0e8 = FUN_00d4fe50();
        DAT_026cd0d0 = "GNDictionary";
        _DAT_026cd0d8 = 0x28;
        _DAT_026cd0e0 = FUN_00022d20;
        _DAT_026cd0f0 = (undefined1  [16])0x0;
        _DAT_026cd100 = 0;
        _DAT_026cd178 = (undefined1  [16])0x0;
        _DAT_026cd188 = 0;
        DAT_026cd18a = 6;
        _DAT_026cd108 = (undefined1  [16])0x0;
        _DAT_026cd118 = (undefined1  [16])0x0;
        _DAT_026cd128 = (undefined1  [16])0x0;
        _DAT_026cd138 = (undefined1  [16])0x0;
        _DAT_026cd148 = (undefined1  [16])0x0;
        _DAT_026cd158 = (undefined1  [16])0x0;
        _DAT_026cd168 = (undefined1  [16])0x0;
        DAT_026cd193 = 0;
        _DAT_026cd18b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 != '\0') {
          if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            _DAT_026d5e58 = FUN_00d4fe50();
            DAT_026d5e40 = "GNString";
            _DAT_026d5e48 = 0x40;
            _DAT_026d5e50 = FUN_0005d920;
            _DAT_026d5e60 = (undefined1  [16])0x0;
            _DAT_026d5e70 = (undefined1  [16])0x0;
            _DAT_026d5e80 = (undefined1  [16])0x0;
            _DAT_026d5e90 = (undefined1  [16])0x0;
            _DAT_026d5ea0 = (undefined1  [16])0x0;
            _DAT_026d5eb0 = (undefined1  [16])0x0;
            _DAT_026d5ec0 = (undefined1  [16])0x0;
            _DAT_026d5ed0 = (undefined1  [16])0x0;
            _DAT_026d5ee0 = (undefined1  [16])0x0;
            _DAT_026d5ef0 = (undefined1  [16])0x0;
            _DAT_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar2 = FUN_00e8db60();
          pplVar5 = &local_40;
          if (cVar2 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
      }
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar4 + 0x18))();
        uVar7 = (**(code **)(*unaff_RDI + 0x3a8))();
        plVar1 = DAT_02765240;
        local_70 = '\0';
        local_78 = plVar4;
        if (DAT_02765240 != (longlong *)0x0) {
          uVar7 = FUN_00d50b00();
        }
        local_40 = plVar1;
        local_38 = '\0';
        FUN_00ca0840(uVar7,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_68 = local_58;
      local_60 = '\0';
      uVar7 = (**(code **)(*local_58 + 0x368))();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = plVar1;
      local_38 = '\0';
      FUN_00ca0840(uVar7,&local_40);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
LAB_00aecb55:
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


