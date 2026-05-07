// Function: FUN_01a6c2e0
// Address: 01a6c2e0
// Size: 1541 bytes
// Class: MUChord


/* WARNING: Removing unreachable block (ram,0x01a6c5e0) */
/* WARNING: Removing unreachable block (ram,0x01a6c5ec) */

undefined8 * FUN_01a6c2e0(undefined8 param_1,ulonglong param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *local_98;
  char local_90;
  undefined4 local_84;
  longlong local_80;
  char local_78;
  ulonglong local_70;
  longlong *local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_84 = param_3;
  local_70 = param_2;
  (**(code **)(*unaff_RSI + 0x988))();
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6c350;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_01a6c350:
    if (*(int *)((longlong)local_48 + 0xc) == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      if (local_70 >> 0x20 == 0) {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = 0;
        FUN_01252670(0,0,0,0);
        pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = local_70;
        FUN_012521f0(local_70,0,0,0);
        pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (longlong *)0x0) {
          local_50 = (longlong *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01787610();
      if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_48 + 0x370))();
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cc80();
      FUN_017873f0();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cd50();
      FUN_01787450();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6ce30();
      FUN_01787510();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = '\0';
      local_98 = puVar3;
      (**(code **)(*local_48 + 0x388))(param_1,local_70,&local_98,(longlong)unaff_RSI + 0x204);
      if (local_40[0] == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (longlong *)0x0) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_50 != (longlong *)0x0) && ((char)local_84 != '\0')) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *unaff_RDI = puVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((bVar1) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    return unaff_RDI;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


