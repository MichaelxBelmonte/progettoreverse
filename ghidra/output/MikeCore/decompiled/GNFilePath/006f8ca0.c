// Function: FUN_006f8ca0
// Address: 006f8ca0
// Size: 2205 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x006f941c) */
/* WARNING: Removing unreachable block (ram,0x006f9428) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f8ca0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong lVar5;
  longlong local_140;
  char local_138;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0xa0);
  if (lVar1 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  if ((lVar1 == 0) == (bool)unaff_SIL) {
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01beab60();
    lVar3 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (*(longlong *)(unaff_RDI + 0xa0) == 0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_0010c180();
      (**(code **)(*plVar4 + 0x18))();
      FUN_01c72fa0();
      (**(code **)(*plVar4 + 0x4d0))(0,_DAT_023b7160);
      FUN_006f3f00();
      FUN_00757c60();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c51220();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01be81a0();
      lVar5 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c51ca0();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_01c45750();
      FUN_01c84980();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x990))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c71a30();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x988))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c719d0();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar2 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar2 + 0x978))();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01c71a90();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      FUN_01c5cb00();
      local_c8 = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x78) + 0x10))();
      FUN_00d50b00();
      local_c8 = '\x01';
      local_d0 = (longlong *)(unaff_RDI + 0x78);
      FUN_01c5cb20();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        (**(code **)(*local_d0 + 0x10))();
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RDI + 0xa8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c73160();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar2 = *(longlong **)(unaff_RDI + 0xa0);
      if (plVar2 != plVar4) {
        FUN_00d50b00();
        *(longlong **)(unaff_RDI + 0xa0) = plVar4;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_01c446f0();
      FUN_0024e680();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*plVar4 + 0x6e8))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      else {
        FUN_00d50b00();
        lVar5 = *(longlong *)(unaff_RDI + 0xa0);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
      }
      FUN_01c45750();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      FUN_0071fc50(0,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d50b00();
      FUN_00d50b20();
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01d98b80();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01c5c620();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = *(longlong *)(unaff_RDI + 0xa0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d50130();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI + 0xa0) != 0) {
        *(undefined8 *)(unaff_RDI + 0xa0) = 0;
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = DAT_026f6e90;
    if (DAT_026f6e90 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_e0 = 0;
    local_d8 = '\0';
    FUN_00d40470(&local_e0,&stack0xffffffffffffff40,1,3);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


