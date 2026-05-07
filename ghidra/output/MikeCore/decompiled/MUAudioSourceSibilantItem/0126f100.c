// Function: FUN_0126f100
// Address: 0126f100
// Size: 565 bytes
// Class: MUAudioSourceSibilantItem


/* WARNING: Removing unreachable block (ram,0x0126f1b7) */
/* WARNING: Removing unreachable block (ram,0x0126f1c0) */
/* WARNING: Removing unreachable block (ram,0x0126f141) */
/* WARNING: Removing unreachable block (ram,0x0126f14a) */
/* WARNING: Removing unreachable block (ram,0x0126f226) */
/* WARNING: Removing unreachable block (ram,0x0126f22f) */

undefined1 * FUN_0126f100(pthread_key_t param_1)

{
  double dVar1;
  void *pvVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *local_40;
  char local_38;
  
  FUN_0125e7c0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return (undefined1 *)0x0;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return (undefined1 *)0x0;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_0126f20c;
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
LAB_0126f20c:
    puVar4 = &DAT_02802501;
    goto LAB_0126f31c;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc240();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0126f234;
    }
LAB_0126f281:
    puVar4 = &DAT_02802501;
  }
  else {
    if (local_40 == (longlong *)0x0) goto LAB_0126f281;
LAB_0126f234:
    pvVar2 = _pthread_getspecific(param_1);
    plVar5 = local_40;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    dVar1 = (double)(**(code **)(*plVar5 + 0x380))(0);
    if ((float)dVar1 <= DAT_023d59b4) {
      pvVar2 = _pthread_getspecific(param_1);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        local_40 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_014bb310();
      dVar1 = (double)(**(code **)(*local_40 + 0x3a8))(0,uVar6);
      puVar4 = (undefined1 *)CONCAT71(0x28025,(float)dVar1 <= DAT_023d59b4);
    }
    else {
      puVar4 = (undefined1 *)0x0;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_0126f31c:
  FUN_00d50b20();
  return puVar4;
}


