// Function: FUN_01539540
// Address: 01539540
// Size: 1133 bytes
// Class: Unknown
// String references:
//   "Midi Channel %I"


/* WARNING: Removing unreachable block (ram,0x01539665) */
/* WARNING: Removing unreachable block (ram,0x01539875) */
/* WARNING: Removing unreachable block (ram,0x01539881) */
/* WARNING: Removing unreachable block (ram,0x01539616) */
/* WARNING: Removing unreachable block (ram,0x0153961f) */
/* WARNING: Removing unreachable block (ram,0x0153962d) */
/* WARNING: Removing unreachable block (ram,0x01539636) */
/* WARNING: Removing unreachable block (ram,0x01539611) */
/* WARNING: Removing unreachable block (ram,0x01539782) */
/* WARNING: Removing unreachable block (ram,0x0153979b) */
/* WARNING: Removing unreachable block (ram,0x01539970) */
/* WARNING: Removing unreachable block (ram,0x0153997c) */
/* WARNING: Removing unreachable block (ram,0x015397c1) */
/* WARNING: Removing unreachable block (ram,0x01539670) */
/* WARNING: Removing unreachable block (ram,0x01539690) */
/* WARNING: Removing unreachable block (ram,0x01539672) */
/* WARNING: Removing unreachable block (ram,0x01539692) */

longlong * FUN_01539540(void)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong local_90;
  char local_88;
  pthread_key_t local_50;
  int local_48;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00d4ff40();
  *plVar2 = (longlong)&DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00b518f0();
  pVar5 = 0x24cc6f0;
  FUN_00d94d80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  local_50 = 0x24cc6f0;
  local_48 = -1;
  do {
    lVar4 = (longlong)local_48;
    local_48 = local_48 + 1;
    pVar5 = local_50;
    if (DAT_024cc6fc <= local_48) goto LAB_015397a1;
    lVar4 = *(longlong *)(DAT_024cc700 + 8 + lVar4 * 8);
    lVar6 = DAT_024cc700;
    pvVar3 = _pthread_getspecific((pthread_key_t)DAT_024cc700);
    pVar5 = (pthread_key_t)lVar6;
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6000();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    cVar1 = (**(code **)(*plVar2 + 0x50))();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  } while (cVar1 == '\0');
  if (lVar4 == 0) {
LAB_015397a1:
    FUN_000be170();
  }
  else {
    FUN_00d50b00();
    FUN_000be170();
    if (lVar4 != 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = lVar4;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto LAB_0153998e;
    }
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00082580();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e5f80();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e57e0();
  FUN_012e57a0();
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6520();
  *unaff_RDI = (longlong)plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0153998e:
  FUN_00d50b20();
  FUN_00d50b20();
  return unaff_RDI;
}


