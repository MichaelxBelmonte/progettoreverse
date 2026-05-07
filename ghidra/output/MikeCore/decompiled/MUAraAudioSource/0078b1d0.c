// Function: FUN_0078b1d0
// Address: 0078b1d0
// Size: 937 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x0078b432) */
/* WARNING: Removing unreachable block (ram,0x0078b43e) */
/* WARNING: Removing unreachable block (ram,0x0078b44c) */
/* WARNING: Removing unreachable block (ram,0x0078b458) */
/* WARNING: Removing unreachable block (ram,0x0078b4b4) */
/* WARNING: Removing unreachable block (ram,0x0078b4c1) */

undefined8 * FUN_0078b1d0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  undefined8 local_d8;
  longlong local_c8;
  char local_c0;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_70 + 0x450))();
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    FUN_01f27fe0();
    if (unaff_RSI != 0) {
      FUN_00d50b00();
    }
    FUN_000c4290();
    if ((local_68 == '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (unaff_RSI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 != (longlong *)0x0) {
      if (0 < *(int *)((longlong)local_70 + 0xc)) {
        iVar4 = 0;
        do {
          FUN_0051e6f0();
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)((longlong)local_70 + 0xc));
      }
      FUN_0015ee90();
      FUN_00d50b20();
    }
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else if (*(longlong *)(unaff_RSI + 0x90) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    local_d8 = *(undefined8 *)(unaff_RSI + 0x90);
    FUN_00083ea0(2,&local_d8);
    FUN_0078b920();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_0078b830();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT44(uStack_4c,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


