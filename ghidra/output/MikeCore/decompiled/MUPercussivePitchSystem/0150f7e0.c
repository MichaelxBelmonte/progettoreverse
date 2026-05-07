// Function: FUN_0150f7e0
// Address: 0150f7e0
// Size: 1229 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x0150fbd3) */
/* WARNING: Removing unreachable block (ram,0x0150fbdc) */
/* WARNING: Removing unreachable block (ram,0x0150f894) */
/* WARNING: Removing unreachable block (ram,0x0150f8c0) */
/* WARNING: Removing unreachable block (ram,0x0150f896) */
/* WARNING: Removing unreachable block (ram,0x0150f8c2) */

void FUN_0150f7e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  int iVar8;
  longlong local_80;
  char local_78;
  longlong *local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar3 = local_58;
  if (*(char *)((longlong)unaff_RDI + 0xa2) != '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0xa2) = 0;
    (**(code **)(*unaff_RDI + 0x380))();
  }
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      goto LAB_0150f849;
    }
  }
  else if (local_58 != 0) {
LAB_0150f849:
    local_50 = '\0';
    local_58 = 0;
    local_40 = -1;
    while( true ) {
      lVar2 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar3 + 0xc) <= local_40) break;
      lVar6 = *(longlong *)(lVar3 + 0x10);
      local_58 = *(longlong *)(lVar6 + 8 + lVar2 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      pVar5 = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      if (local_68 == (longlong *)0x0) {
        cVar1 = '\0';
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012eb770();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_012f9ac0();
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012ed0d0();
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012ed0d0();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    param_1 = lVar3;
  }
  FUN_0151a240();
  FUN_0151a950();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_0150fc58;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_0150fc58;
  if (0 < *(int *)(local_58 + 0xc)) {
    iVar8 = 0;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f51f0();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_0150fbf0;
        }
      }
      else if (local_68 != (longlong *)0x0) {
LAB_0150fbf0:
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = local_68;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar7 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x370))();
        FUN_00d50b20();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(local_58 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
LAB_0150fc58:
  lVar3 = unaff_RDI[9];
  if (lVar3 != 0) {
    for (iVar8 = 0; iVar8 < *(int *)(lVar3 + 0xc); iVar8 = iVar8 + 1) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f7e0();
    }
    FUN_0131c770();
  }
  return;
}


