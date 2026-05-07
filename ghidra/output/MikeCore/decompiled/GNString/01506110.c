// Function: FUN_01506110
// Address: 01506110
// Size: 2256 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x0150678b) */
/* WARNING: Removing unreachable block (ram,0x01506797) */
/* WARNING: Removing unreachable block (ram,0x015066be) */
/* WARNING: Removing unreachable block (ram,0x015066ca) */
/* WARNING: Removing unreachable block (ram,0x01506604) */
/* WARNING: Removing unreachable block (ram,0x0150659f) */
/* WARNING: Removing unreachable block (ram,0x0150653a) */
/* WARNING: Removing unreachable block (ram,0x0150652e) */
/* WARNING: Removing unreachable block (ram,0x01506593) */
/* WARNING: Removing unreachable block (ram,0x015065f8) */
/* WARNING: Removing unreachable block (ram,0x01506659) */
/* WARNING: Removing unreachable block (ram,0x01506665) */
/* WARNING: Removing unreachable block (ram,0x01506723) */
/* WARNING: Removing unreachable block (ram,0x0150672f) */
/* WARNING: Removing unreachable block (ram,0x015068f6) */
/* WARNING: Removing unreachable block (ram,0x01506902) */
/* WARNING: Removing unreachable block (ram,0x01506966) */
/* WARNING: Removing unreachable block (ram,0x01506972) */

void FUN_01506110(char *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  char *pcVar5;
  pthread_key_t pVar6;
  int iVar7;
  longlong unaff_RDI;
  bool bVar8;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60 [8];
  char *local_58;
  undefined8 local_50;
  int local_48;
  char local_40 [8];
  longlong local_38;
  
  if (*(int *)(*(longlong *)(unaff_RDI + 0x40) + 0xc) == 0) {
    FUN_012ca6e0();
    if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_01505960();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  if (*(char **)(unaff_RDI + 0x40) != (char *)0x0) {
    local_60[0] = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = *(char **)(unaff_RDI + 0x40);
    while( true ) {
      lVar1 = (longlong)(int)local_50;
      iVar7 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar7);
      if (*(int *)(local_58 + 0xc) <= iVar7) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar1 * 8);
      pvVar3 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_58 + 0x10));
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cce00();
      if (local_50._4_4_ != 0) {
        if (local_50 < 0) {
          iVar7 = -local_50._4_4_;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - local_50._4_4_);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar7 = 0;
        }
        local_50 = CONCAT44(iVar7,(int)local_50);
      }
    }
    param_1 = local_58;
    FUN_01507540();
  }
  plVar2 = *(longlong **)(unaff_RDI + 0x38);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01505730();
  }
  else {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0150eff0();
  if (*(int *)(local_68 + 0xc) == 0) {
    bVar8 = true;
  }
  else {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d280();
    bVar8 = *(int *)(local_88 + 0xc) != 0;
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_60[0] != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar4 + 0x18))();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (((local_60[0] == '\0') && (local_68 != 0)) &&
       ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != 0)))) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if ((((local_60[0] == '\0') && (local_68 != 0)) && (FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    local_38 = local_68;
    if (((local_60[0] == '\0') && (local_68 != 0)) &&
       ((FUN_00d50b00(), local_60[0] != '\0' && (local_68 != 0)))) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150d0b0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150c7f0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150ceb0();
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150f020();
    while( true ) {
      pVar6 = (pthread_key_t)param_1;
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eff0();
      iVar7 = *(int *)(local_68 + 0xc);
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (iVar7 == 0) break;
      pvVar3 = _pthread_getspecific(pVar6);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eff0();
      FUN_00d23310();
      local_40[0] = local_60[0];
      param_1 = local_40;
      pcVar5 = local_60;
      if (local_60[0] == '\0') {
        pcVar5 = param_1;
      }
      *pcVar5 = '\0';
      if ((local_60[0] != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f380();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150f020();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01505730();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


