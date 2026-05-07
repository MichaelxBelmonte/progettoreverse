// Function: FUN_000bc580
// Address: 000bc580
// Size: 1690 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x000bcaef) */
/* WARNING: Removing unreachable block (ram,0x000bcafb) */
/* WARNING: Removing unreachable block (ram,0x000bc6a2) */
/* WARNING: Removing unreachable block (ram,0x000bc6ae) */
/* WARNING: Removing unreachable block (ram,0x000bcb38) */
/* WARNING: Removing unreachable block (ram,0x000bcb44) */
/* WARNING: Removing unreachable block (ram,0x000bc844) */
/* WARNING: Removing unreachable block (ram,0x000bc851) */
/* WARNING: Removing unreachable block (ram,0x000bc64b) */
/* WARNING: Removing unreachable block (ram,0x000bc654) */
/* WARNING: Removing unreachable block (ram,0x000bc5da) */
/* WARNING: Removing unreachable block (ram,0x000bc5e3) */
/* WARNING: Removing unreachable block (ram,0x000bc6ee) */
/* WARNING: Removing unreachable block (ram,0x000bc6f7) */
/* WARNING: Removing unreachable block (ram,0x000bca76) */
/* WARNING: Removing unreachable block (ram,0x000bca7f) */

void FUN_000bc580(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_78;
  longlong local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  
  (**(code **)(*(longlong *)unaff_RDI[3] + 0xa00))();
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) goto LAB_000bc65b;
    FUN_00d50b00();
LAB_000bc5e8:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012caf10();
    if (local_48 == (longlong *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    plVar6 = local_48;
  }
  else {
    if (local_48 != (longlong *)0x0) goto LAB_000bc5e8;
LAB_000bc65b:
    bVar2 = true;
    bVar3 = false;
    plVar6 = (longlong *)0x0;
  }
  FUN_001060d0();
  (**(code **)(*unaff_RDI + 1000))();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_000bc6fc;
    }
  }
  else if (local_48 != (longlong *)0x0) {
LAB_000bc6fc:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016573a0();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01710460();
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == (longlong *)0x0) {
      bVar1 = false;
      plVar7 = (longlong *)0x0;
    }
    else {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01655360();
      if (cVar4 == '\0') {
        local_58 = '\0';
        local_60 = 0;
LAB_000bc876:
        local_78 = 0;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01657380();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650210();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012caf10();
        if (local_58 == '\0') {
          if (local_60 == 0) goto LAB_000bc876;
          FUN_00d50b00();
          local_78 = local_60;
        }
        else {
          local_78 = local_60;
          local_58 = '\0';
        }
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar9 = FUN_01653910();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar10 = FUN_01653920();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_01655040();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = FUN_01655100();
      FUN_016c11a0(uVar9,uVar10,uVar11,uVar8);
      if (local_48 == (longlong *)0x0) {
        bVar1 = false;
      }
      else if (local_40 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
      }
      else {
        local_40 = '\0';
        bVar1 = true;
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      plVar7 = local_48;
    }
    FUN_00d50b20();
    goto LAB_000bcb11;
  }
  bVar1 = false;
  plVar7 = (longlong *)0x0;
LAB_000bcb11:
  FUN_00106210();
  (**(code **)(&UNK_00001550 + *(longlong *)unaff_RDI[3]))();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[3] + 0x620))();
  }
  else {
    (**(code **)(&UNK_00001550 + *(longlong *)unaff_RDI[3]))();
    (**(code **)(*local_48 + 0x620))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  if ((bVar3) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}


