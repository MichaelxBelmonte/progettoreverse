// Function: FUN_00aec770
// Address: 00aec770
// Size: 1420 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00aec770(void)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t **pplVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00aeb2e0();
  plVar6 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_00aecb55;
    FUN_00d50b00();
    iVar3 = (int)plVar6[3];
  }
  else {
    if (local_40 == (int64_t *)0x0) goto LAB_00aecb55;
    iVar3 = (int)local_40[3];
  }
  if ((0x10 < iVar3) && (*(uint8_t (*) [16])plVar6[2] == g_02765560)) {
    FUN_00c8e2b0(0,iVar3 + -0x10);
    plVar4 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
        (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    uVar7 = FUN_00c92170();
    if (plVar6 == plVar4) {
      if (plVar4 != (int64_t *)0x0) {
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
      if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      uVar7 = (**(code **)(*this_ptr + 0x3a8))();
      local_88 = g_02765240;
      if (g_02765240 != (int64_t *)0x0) {
        uVar7 = FUN_00d50b00();
      }
      local_80 = '\x01';
      FUN_000175c0(uVar7,&local_88);
      plVar4 = local_40;
      if ((g_026fdd40 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        g_026cd0e8 = FUN_00d4fe50();
        g_026cd0d0 = "GNDictionary";
        g_026cd0d8 = 0x28;
        g_026cd0e0 = FUN_00022d20;
        g_026cd0f0 = (uint8_t  [16])0x0;
        g_026cd100 = 0;
        g_026cd178 = (uint8_t  [16])0x0;
        g_026cd188 = 0;
        g_026cd18a = 6;
        g_026cd108 = (uint8_t  [16])0x0;
        g_026cd118 = (uint8_t  [16])0x0;
        g_026cd128 = (uint8_t  [16])0x0;
        g_026cd138 = (uint8_t  [16])0x0;
        g_026cd148 = (uint8_t  [16])0x0;
        g_026cd158 = (uint8_t  [16])0x0;
        g_026cd168 = (uint8_t  [16])0x0;
        g_026cd193 = 0;
        g_026cd18b = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (int64_t **)&g_02802688;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x360))();
        cVar2 = FUN_00e85ea0();
        if (cVar2 != '\0') {
          if ((g_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
            g_026d5e58 = FUN_00d4fe50();
            g_026d5e40 = "GNString";
            g_026d5e48 = 0x40;
            g_026d5e50 = FUN_0005d920;
            g_026d5e60 = (uint8_t  [16])0x0;
            g_026d5e70 = (uint8_t  [16])0x0;
            g_026d5e80 = (uint8_t  [16])0x0;
            g_026d5e90 = (uint8_t  [16])0x0;
            g_026d5ea0 = (uint8_t  [16])0x0;
            g_026d5eb0 = (uint8_t  [16])0x0;
            g_026d5ec0 = (uint8_t  [16])0x0;
            g_026d5ed0 = (uint8_t  [16])0x0;
            g_026d5ee0 = (uint8_t  [16])0x0;
            g_026d5ef0 = (uint8_t  [16])0x0;
            g_026d5f00 = 0;
            ___cxa_guard_release();
          }
          cVar2 = FUN_00e8db60();
          pplVar5 = &local_40;
          if (cVar2 == '\0') {
            pplVar5 = (int64_t **)&g_02802688;
          }
        }
      }
      plVar4 = *pplVar5;
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (plVar4 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar5 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 == (int64_t *)0x0) {
        plVar4 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar4 + 0x18))();
        uVar7 = (**(code **)(*this_ptr + 0x3a8))();
        plVar1 = g_02765240;
        local_70 = '\0';
        local_78 = plVar4;
        if (g_02765240 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
        local_40 = plVar1;
        local_38 = '\0';
        FUN_00ca0840(uVar7,&local_40);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_68 = local_58;
      local_60 = '\0';
      uVar7 = (**(code **)(*local_58 + 0x368))();
      plVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          uVar7 = FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_40 = plVar1;
      local_38 = '\0';
      FUN_00ca0840(uVar7,&local_40);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
LAB_00aecb55:
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

