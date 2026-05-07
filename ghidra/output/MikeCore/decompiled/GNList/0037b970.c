// Function: FUN_0037b970
// Address: 0037b970
// Size: 1334 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0037b970(void)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined8 *unaff_RSI;
  longlong *plVar5;
  longlong **pplVar6;
  undefined4 uVar7;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_00d6f370();
  local_d0 = DAT_02704008;
  if (DAT_02704008 != 0) {
    FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  FUN_00d704d0(&local_c0,&local_d0);
  plVar5 = local_48;
  if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026cd478 = FUN_00d4fe50();
    DAT_026cd460 = "GNList";
    _DAT_026cd468 = 0x20;
    _DAT_026cd470 = FUN_00018210;
    _DAT_026cd480 = 0;
    uRam00000000026cd488 = 0;
    _DAT_026cd490 = 0;
    _DAT_026cd508 = 0;
    uRam00000000026cd510 = 0;
    _DAT_026cd518 = 0;
    DAT_026cd51a = 6;
    _DAT_026cd498 = 0;
    uRam00000000026cd4a0 = 0;
    _DAT_026cd4a8 = 0;
    uRam00000000026cd4b0 = 0;
    _DAT_026cd4b8 = 0;
    uRam00000000026cd4c0 = 0;
    _DAT_026cd4c8 = 0;
    uRam00000000026cd4d0 = 0;
    _DAT_026cd4d8 = 0;
    uRam00000000026cd4e0 = 0;
    _DAT_026cd4e8 = 0;
    uRam00000000026cd4f0 = 0;
    _DAT_026cd4f8 = 0;
    uRam00000000026cd500 = 0;
    DAT_026cd523 = 0;
    _DAT_026cd51b = 0;
    ___cxa_guard_release();
  }
  pplVar6 = (longlong **)&DAT_02802688;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar1 = FUN_00e8da30();
      pplVar6 = &local_48;
      if (cVar1 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
  }
  local_88 = 0;
  plVar5 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  local_88 = '\x01';
  local_90 = plVar5;
  FUN_0009d720();
  plVar5 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    local_68 = '\0';
    local_70 = (longlong *)0x0;
    local_38 = plVar5;
    local_60 = plVar5;
    local_58 = 0xffffffff;
    local_50 = 0;
    uVar3 = 0;
    while( true ) {
      if (uVar3 != 0) {
        if ((int)uVar3 < 1) {
          iVar4 = -uVar3;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - uVar3);
          FUN_00d23690(uVar3,uVar3);
          local_50 = local_50 + local_58._4_4_;
          iVar4 = 0;
        }
        local_58 = CONCAT44(iVar4,(int)local_58);
      }
      lVar2 = (longlong)(int)local_58;
      iVar4 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar4);
      if (*(int *)((longlong)local_60 + 0xc) <= iVar4) break;
      plVar5 = *(longlong **)(local_60[2] + 8 + lVar2 * 8);
      local_70 = plVar5;
      (**(code **)(*(longlong *)*unaff_RSI + 0x368))();
      local_80 = local_48;
      local_78 = 0;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = '\x01';
      cVar1 = (**(code **)(*plVar5 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar3 = local_58._4_4_;
      if (cVar1 != '\0') {
        uVar3 = ~local_58._4_4_;
        local_58 = CONCAT44(uVar3,(int)local_58);
      }
    }
    FUN_00018280();
    plVar5 = local_38;
  }
  uVar7 = FUN_00d6f370();
  local_a0 = DAT_02704008;
  local_a8 = '\0';
  local_b0 = plVar5;
  if (DAT_02704008 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_98 = '\x01';
  FUN_00d6f570(uVar7,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


