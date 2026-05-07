// Function: FUN_015104e0
// Address: 015104e0
// Size: 1151 bytes
// Class: MUPercussivePitchSystem


/* WARNING: Removing unreachable block (ram,0x01510958) */
/* WARNING: Removing unreachable block (ram,0x01510965) */

void FUN_015104e0(void)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong unaff_RDI;
  longlong *plVar8;
  undefined8 local_b0;
  code *local_a8;
  undefined *local_a0;
  code *local_98;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  if ((*(longlong *)(unaff_RDI + 0x80) != 0) && (*(longlong *)(unaff_RDI + 0x78) != 0)) {
    if (*(longlong *)(unaff_RDI + 0x90) == 0) {
      FUN_00d64850();
      plVar2 = (longlong *)FUN_0151fdc0();
      (**(code **)(*plVar2 + 0x18))();
      lVar6 = *(longlong *)(unaff_RDI + 0x90);
      *(longlong **)(unaff_RDI + 0x90) = plVar2;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      FUN_00d64910();
    }
    local_70 = '\0';
    local_78 = 0;
    local_7c = 0xffffffff;
    local_98 = DAT_025fee30;
    local_a0 = &DAT_025fee18;
    pcVar5 = DAT_025fee30;
    while( true ) {
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_00e7bdb0();
      pcVar5 = (code *)FUN_00e7bdb0();
      cVar1 = FUN_01252960(pcVar5,uVar4,&local_78,&local_b0);
      pVar7 = (pthread_key_t)pcVar5;
      if (cVar1 == '\0') break;
      if (local_78 != 0) {
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar2[10] = 0;
        plVar2[7] = 0;
        plVar2[8] = 0;
        *(undefined4 *)(plVar2 + 9) = 0;
        *plVar2 = (longlong)local_a0;
        *(undefined8 *)((longlong)plVar2 + 0x6c) = 0;
        plVar2[0xb] = 0;
        plVar2[0xc] = 0;
        *(undefined2 *)(plVar2 + 0xd) = 0;
        (*local_98)();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b670();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = local_78;
        local_88 = '\0';
        FUN_0173b680();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01822e80();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0173b720();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_015220b0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar7);
        plVar8 = plVar2;
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar8 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar8 + 0x1a0))();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = '\0';
        pcVar5 = local_a8;
        FUN_012502a0(local_a8,local_b0,0);
        FUN_00d50b20();
        local_40 = plVar2;
      }
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(unaff_RDI + 0xa1) = 1;
  return;
}


