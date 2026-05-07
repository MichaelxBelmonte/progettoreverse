// Function: FUN_016948c0
// Address: 016948c0
// Size: 775 bytes
// Class: MUAraPlugInWrapperDelegate
// String references:
//   "MUAraPlugInWrapperDelegate"
//   "%p"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016948c0(void)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  longlong *plVar5;
  undefined *local_68;
  uint local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  if (*(char *)(unaff_RDI + 0xa4) != '\0') {
    *(undefined1 *)(unaff_RDI + 0xa4) = 0;
    plVar5 = *(longlong **)(unaff_RDI + 0x28);
    if ((DAT_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_02723548 = "MUAraPlugInWrapperDelegate";
      DAT_02723558 = 0;
      _DAT_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
    }
    (**(code **)(*(longlong *)((longlong)plVar5 + lVar2) + 0x18))();
    local_58 = *(undefined8 *)(unaff_RDI + 0x98);
    local_60 = 1;
    pVar4 = 0x2576920;
    local_68 = &DAT_02576920;
    FUN_00d8cb40(&DAT_02576920,&local_68);
    local_50 = local_30;
    local_48 = 0;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    FUN_00bd69b0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_0167ab60();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01538260();
    local_40 = local_68;
    local_38 = 0;
    if ((char)local_60 == '\0') {
      if (local_68 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = local_60 & 0xffffff00;
    }
    local_38 = '\x01';
    FUN_00bd78f0();
    if ((local_38 != '\0') && (local_40 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_60 != '\0') && (local_68 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    plVar5 = *(longlong **)(unaff_RDI + 0x28);
    if ((DAT_02723560 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      _DAT_02723548 = "MUAraPlugInWrapperDelegate";
      DAT_02723558 = 0;
      _DAT_02723550 = 0;
      ___cxa_guard_release();
    }
    if (plVar5 == (longlong *)0x0) {
      lVar2 = *(longlong *)(unaff_RDI + 0x98);
      plVar5 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar5 + 0x360))();
      lVar2 = FUN_00e86120();
      plVar5 = (longlong *)((longlong)plVar5 + lVar2);
      lVar2 = *(longlong *)(unaff_RDI + 0x98);
    }
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar5 + 0x20))
              (*(undefined1 *)(unaff_RDI + 0xa6),*(undefined1 *)(unaff_RDI + 0xa5),
               *(undefined1 *)(unaff_RDI + 0xa7));
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


