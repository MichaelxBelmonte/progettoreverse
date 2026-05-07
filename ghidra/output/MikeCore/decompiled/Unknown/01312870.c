// Function: FUN_01312870
// Address: 01312870
// Size: 545 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01312985) */
/* WARNING: Removing unreachable block (ram,0x0131298e) */
/* WARNING: Removing unreachable block (ram,0x01312a3b) */
/* WARNING: Removing unreachable block (ram,0x01312a44) */

longlong * FUN_01312870(pthread_key_t param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong in_stack_ffffffffffffffa8;
  char local_50;
  
  if (*param_2 == 0) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    param_1 = 0x2572358;
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == puVar3) {
      if ((char)param_2[1] != '\0') {
        FUN_00d50b20();
        goto LAB_013128ef;
      }
    }
    else {
      *param_2 = (longlong)puVar3;
      if (((char)param_2[1] != '\0') && (puVar1 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
LAB_013128ef:
  if (*(longlong *)(unaff_RSI + 0xf0) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8a60();
    if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffa8 != 0) {
      FUN_00d50b00();
      FUN_00d23370();
      FUN_00d50b20();
    }
  }
  lVar2 = *(longlong *)(unaff_RSI + 0xf8);
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 0xc)) {
      iVar5 = 0;
      do {
        FUN_01312870();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(lVar2 + 0xc));
    }
    FUN_01312d90();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar2 = *param_2;
  if ((char)param_2[1] == '\0') {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return unaff_RDI;
}


