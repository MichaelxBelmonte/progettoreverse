// Function: FUN_00261fb0
// Address: 00261fb0
// Size: 1043 bytes
// Class: MDEditorScrollView


/* WARNING: Removing unreachable block (ram,0x002622a8) */
/* WARNING: Removing unreachable block (ram,0x002622b1) */
/* WARNING: Removing unreachable block (ram,0x00262371) */
/* WARNING: Removing unreachable block (ram,0x0026237a) */

undefined8 * FUN_00261fb0(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined *puVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  puVar1 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar3 = &DAT_02572358;
  *puVar1 = &DAT_02572358;
  (*DAT_02572370)();
  if (*(longlong **)(unaff_RSI + 0x90) != (longlong *)0x0) {
    (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RSI + 0x90)))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RSI + 0x90)))();
      (**(code **)(&UNK_00001668 + *local_40))();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_80 != 0) {
        (**(code **)(&UNK_00001550 + **(longlong **)(unaff_RSI + 0x90)))();
        (**(code **)(&UNK_00001668 + *local_50))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d235a0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_002623b4;
    }
  }
  FUN_00261550();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_002623b4;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_002623b4;
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar4 = 0;
    do {
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01657380();
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01650620();
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016670b0();
      pvVar2 = _pthread_getspecific((pthread_key_t)puVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0124df10();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d235a0();
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(local_80 + 0xc));
  }
  FUN_00277f20();
  FUN_00d50b20();
LAB_002623b4:
  *unaff_RDI = puVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


