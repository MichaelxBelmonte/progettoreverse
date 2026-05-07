// Function: FUN_00457000
// Address: 00457000
// Size: 776 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00457215) */
/* WARNING: Removing unreachable block (ram,0x0045721e) */
/* WARNING: Removing unreachable block (ram,0x00457229) */
/* WARNING: Removing unreachable block (ram,0x00457232) */
/* WARNING: Removing unreachable block (ram,0x004572c4) */
/* WARNING: Removing unreachable block (ram,0x004572cd) */
/* WARNING: Removing unreachable block (ram,0x00457294) */
/* WARNING: Removing unreachable block (ram,0x004572a1) */

void FUN_00457000(pthread_key_t param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (((int)unaff_RDI[0xe] == 0) && (cVar3 = (**(code **)(*unaff_RDI + 0x4a0))(), cVar3 != '\0')) {
    FUN_01f27fe0();
    lVar6 = *unaff_RSI;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar6 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x108) + 0x28);
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    FUN_000e2730();
    if (local_40 == 0) {
      lVar5 = 0;
      bVar2 = false;
    }
    else {
      lVar5 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_38 = '\0';
        bVar2 = true;
      }
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = bVar2;
    if (lVar5 != 0) goto LAB_004570fe;
  }
  else {
    bVar2 = false;
  }
  lVar5 = unaff_RDI[0xc];
  if ((lVar5 != 0) || (lVar5 = unaff_RDI[6], lVar5 != 0)) {
    FUN_00d50b00();
  }
  bVar1 = true;
  if (lVar5 == 0) {
    bVar1 = bVar2;
  }
LAB_004570fe:
  FUN_0052f190();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264970();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_0052f190();
    FUN_012d99f0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  if ((bVar1) && (lVar5 != 0)) {
    FUN_00d50b20();
  }
  return;
}


