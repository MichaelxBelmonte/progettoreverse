// Function: FUN_01705e00
// Address: 01705e00
// Size: 1340 bytes
// Class: MUBeatSelection


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01705e00(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  void *pvVar2;
  int extraout_var;
  longlong lVar3;
  pthread_key_t in_ECX;
  pthread_key_t pVar4;
  undefined8 uVar5;
  longlong *unaff_RDI;
  double dVar6;
  longlong local_78;
  char local_70;
  double local_48;
  
  pVar4 = in_ECX;
  FUN_016cbba0();
  if ((local_70 == '\0') && (local_78 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = 0;
  FUN_018fc1e0(param_1,0);
  pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bdb0();
  pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165d690();
  pVar4 = (pthread_key_t)uVar5;
  local_48._0_1_ = (char)in_ECX;
  if (local_48._0_1_ != '\0') {
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = (double)FUN_018fd630();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bdb0();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar2 = _pthread_getspecific((pthread_key_t)uVar5);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar6 = (double)FUN_018fd630();
    FUN_00e7bcc0();
    local_48 = local_48 / dVar6;
    if (local_48 < DAT_02411a10) {
      do {
        FUN_00e7c3c0();
        local_48 = local_48 + local_48;
      } while (local_48 < DAT_02411a10);
    }
    pVar4 = (pthread_key_t)uVar5;
    if (_DAT_02411a18 <= local_48) {
      do {
        FUN_00e7c2a0();
        pVar4 = (pthread_key_t)uVar5;
        local_48 = local_48 * DAT_023942d0;
      } while (_DAT_02411a18 <= local_48);
    }
    if ((extraout_var == 0) || (cVar1 = FUN_00e7c630(), cVar1 == '\0')) {
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar4 = (pthread_key_t)local_78;
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901fe0();
      FUN_00e7bac0();
    }
  }
  if (param_3 != '\0') {
    FUN_00e7b970();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    pVar4 = (pthread_key_t)local_78;
  }
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01901eb0(param_1);
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016ea680();
  *unaff_RDI = local_78;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


