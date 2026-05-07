// Function: FUN_01e18bb0
// Address: 01e18bb0
// Size: 957 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e18c36) */
/* WARNING: Removing unreachable block (ram,0x01e18c44) */
/* WARNING: Removing unreachable block (ram,0x01e18c49) */
/* WARNING: Removing unreachable block (ram,0x01e18eb2) */

ulonglong FUN_01e18bb0(void)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  if (*(char *)((longlong)unaff_RDI + 0x174) == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = DAT_027f32f0;
    if (DAT_027f32f0 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41040(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = DAT_027f32f8;
    if (DAT_027f32f8 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d41040(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[0x36];
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
    cVar1 = (**(code **)(*plVar2 + 0x28))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (*(char *)((longlong)unaff_RDI + 0x174) == '\0') {
      (**(code **)(*unaff_RDI + 0x980))();
    }
    else if (unaff_RDI[6] != 0) {
      FUN_01e40eb0();
      plVar2 = local_70;
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_01e40eb0();
        local_80 = 0;
        local_78 = '\0';
        (**(code **)(*local_70 + 0xa90))(*local_70,&local_80);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (cVar1 == '\0') {
      uVar3 = 0;
      goto LAB_01e18f5d;
    }
  }
  if (unaff_RDI[0x30] != 0) {
    FUN_01e1e360();
    if (unaff_RDI[0x30] != 0) {
      unaff_RDI[0x30] = 0;
      FUN_00d50b20();
    }
    if (((int)unaff_RDI[0x2d] == 0) && ((char)unaff_RDI[0x31] != '\0')) {
      (**(code **)(*unaff_RDI + 0x620))();
    }
  }
  if (0 < (int)unaff_RDI[0x2d]) {
    FUN_00e7b4e0();
    (**(code **)(*unaff_RDI + 0x968))();
  }
  if (*(char *)((longlong)unaff_RDI + 0x174) != '\0') {
    (**(code **)(*unaff_RDI + 0x948))();
  }
  uVar3 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
  if ((longlong *)unaff_RDI[0x38] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x38] + 0x20))();
  }
LAB_01e18f5d:
  return uVar3 & 0xffffffff;
}


