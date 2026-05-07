// Function: FUN_01951ef0
// Address: 01951ef0
// Size: 2846 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x01952951) */
/* WARNING: Removing unreachable block (ram,0x01952956) */
/* WARNING: Removing unreachable block (ram,0x01952890) */
/* WARNING: Removing unreachable block (ram,0x0195289c) */
/* WARNING: Removing unreachable block (ram,0x019527b4) */
/* WARNING: Removing unreachable block (ram,0x019527c0) */
/* WARNING: Removing unreachable block (ram,0x01952a10) */
/* WARNING: Removing unreachable block (ram,0x01952a1d) */
/* WARNING: Removing unreachable block (ram,0x019525f5) */
/* WARNING: Removing unreachable block (ram,0x01952557) */
/* WARNING: Removing unreachable block (ram,0x01952563) */
/* WARNING: Removing unreachable block (ram,0x01952663) */
/* WARNING: Removing unreachable block (ram,0x01952670) */
/* WARNING: Removing unreachable block (ram,0x019524b8) */
/* WARNING: Removing unreachable block (ram,0x01952244) */
/* WARNING: Removing unreachable block (ram,0x01952249) */
/* WARNING: Removing unreachable block (ram,0x01952265) */
/* WARNING: Removing unreachable block (ram,0x0195226e) */
/* WARNING: Removing unreachable block (ram,0x0195217a) */
/* WARNING: Removing unreachable block (ram,0x01952183) */
/* WARNING: Removing unreachable block (ram,0x019520b4) */
/* WARNING: Removing unreachable block (ram,0x019520bd) */
/* WARNING: Removing unreachable block (ram,0x01952031) */
/* WARNING: Removing unreachable block (ram,0x0195203a) */
/* WARNING: Removing unreachable block (ram,0x01952163) */
/* WARNING: Removing unreachable block (ram,0x0195216f) */
/* WARNING: Removing unreachable block (ram,0x019521e5) */
/* WARNING: Removing unreachable block (ram,0x019521f1) */
/* WARNING: Removing unreachable block (ram,0x01952501) */
/* WARNING: Removing unreachable block (ram,0x0195250a) */
/* WARNING: Removing unreachable block (ram,0x0195254a) */
/* WARNING: Removing unreachable block (ram,0x019526a3) */
/* WARNING: Removing unreachable block (ram,0x019526ac) */
/* WARNING: Removing unreachable block (ram,0x0195273f) */
/* WARNING: Removing unreachable block (ram,0x01952828) */
/* WARNING: Removing unreachable block (ram,0x01952834) */
/* WARNING: Removing unreachable block (ram,0x019528fe) */
/* WARNING: Removing unreachable block (ram,0x0195290a) */
/* WARNING: Removing unreachable block (ram,0x019529a3) */
/* WARNING: Removing unreachable block (ram,0x019529af) */
/* WARNING: Removing unreachable block (ram,0x01951fbf) */
/* WARNING: Removing unreachable block (ram,0x01951fc8) */
/* WARNING: Removing unreachable block (ram,0x019522b7) */
/* WARNING: Removing unreachable block (ram,0x019522e0) */
/* WARNING: Removing unreachable block (ram,0x019522b9) */
/* WARNING: Removing unreachable block (ram,0x019522e2) */

void FUN_01951ef0(pthread_key_t param_1)

{
  int iVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  int local_48;
  longlong lVar7;
  
  lVar3 = local_60;
  FUN_01948a20();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  pVar2 = (pthread_key_t)local_60;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e6160();
  FUN_00d237a0();
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e7fb0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150fe10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150f380();
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e68b0();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if (local_60 != 0) {
    FUN_00d50b00();
    local_60 = 0;
    local_48 = -1;
    while( true ) {
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_48) break;
      lVar7 = *(longlong *)(lVar3 + 0x10);
      local_60 = *(longlong *)(lVar7 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      FUN_012edae0();
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar5 = lVar3;
    FUN_000be170();
    param_1 = (pthread_key_t)lVar5;
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    param_1 = pVar2;
  }
  FUN_012e5ae0();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  FUN_012edae0();
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_00001850 + *unaff_RDI))();
  if (local_60 != 0) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6a50();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  iVar1 = *(int *)(local_60 + 0xc);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar1 != 1) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e7fb0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150fe10();
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e68b0();
    pvVar4 = _pthread_getspecific(param_1);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = pVar2;
    }
    FUN_012e66e0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f380();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f1c0();
    if (local_60 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001668 + *unaff_RDI))();
  if (*unaff_RSI == local_60) {
    (**(code **)(&DAT_00001680 + *unaff_RDI))();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


