// Function: FUN_016c3770
// Address: 016c3770
// Size: 3175 bytes
// Class: MUAraContentReader


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_016c3770(double param_1,double param_2)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  pthread_key_t in_ECX;
  pthread_key_t pVar10;
  undefined4 *puVar11;
  longlong *in_RDX;
  longlong *unaff_RDI;
  bool bVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 *local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  double local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  
  if (NAN(param_1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_98 = param_2;
  local_70 = (longlong *)param_1;
  local_50 = in_RDX;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = (longlong)local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = 0xffffffff;
  local_5c = 0xffffffff;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bcc0();
  FUN_016cb850(local_70,&local_5c);
  local_78 = (longlong *)FUN_00e7cd00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar11 = &local_5c;
  local_a0 = (longlong *)FUN_0165e220(puVar11,1);
  pVar10 = (pthread_key_t)puVar11;
  plVar4 = (longlong *)FUN_00e7bdb0();
  local_88 = (longlong *)CONCAT44(local_88._4_4_,1);
  local_48 = local_a0;
  FUN_00e7c260();
  local_58 = local_48;
  if (((local_78._4_4_ == 0) || ((ulonglong)local_48 >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    local_48 = local_78;
    FUN_00e7b970();
    plVar4 = local_48;
  }
  else {
    local_78 = local_a0;
  }
  plVar1 = local_78;
  local_c0 = local_80;
  local_8c = local_5c;
  local_70 = plVar4;
  if (NAN(local_98)) {
    uVar13 = FUN_00e7bdb0();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025fa538;
    uVar8 = _UNK_02393728;
    *(undefined8 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(longlong **)((longlong)puVar5 + 0xc) = plVar1;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar13;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_98,&local_8c);
    local_58 = (longlong *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_8c;
    plVar4 = (longlong *)FUN_0165e220(puVar11,2);
    pVar10 = (pthread_key_t)puVar11;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_48 = plVar4;
    FUN_00e7c280();
    local_88 = local_48;
    bVar12 = local_58._4_4_ != 0;
    if (((bVar12) && ((ulonglong)local_48 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
    {
      local_58 = plVar4;
    }
    plVar1 = local_58;
    plVar4 = local_78;
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025fa538;
    uVar8 = _UNK_02393728;
    *(undefined8 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(longlong **)((longlong)puVar5 + 0xc) = plVar4;
    *(longlong **)((longlong)puVar5 + 0x14) = plVar1;
  }
  cVar2 = FUN_016bf620();
  if (cVar2 != '\0') {
    local_68 = puVar5;
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_5c;
    local_a8 = (longlong *)FUN_016c46a0(puVar11,&local_80);
    local_bc = 0xffffffff;
    local_7c = 0xffffffff;
    pVar10 = (pthread_key_t)puVar11;
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (pthread_key_t)local_38;
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_a8,&local_7c);
    local_58 = (longlong *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_0165d690();
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (pthread_key_t)local_38;
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (longlong *)FUN_0165d690();
    local_48 = (longlong *)uVar7;
    FUN_00e7b970();
    plVar4 = local_48;
    puVar5 = local_68;
    local_b8 = (ulonglong)local_48;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    if (((ulonglong)plVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c630(), cVar2 != '\0')) {
      pvVar3 = _pthread_getspecific(pVar10);
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = &local_7c;
      local_e8 = FUN_0165e220(puVar11,1);
      pVar10 = (pthread_key_t)puVar11;
      local_48 = local_58;
      FUN_00e7b970();
      local_f0 = local_48;
      local_48 = local_70;
      FUN_00e7b970();
      plVar4 = local_48;
      local_b0 = local_48;
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
      if (((ulonglong)plVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c630(), cVar2 == '\0')) {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar4 = local_a0;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,plVar4,0,&local_5c);
        local_70 = local_48;
        if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_38;
        }
        uVar8 = local_e8;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,uVar8,0,&local_7c);
        plVar4 = local_48;
        if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        local_e0 = plVar4;
        local_d8 = '\0';
        cVar2 = (**(code **)(*local_70 + 0x50))();
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_48 = (longlong *)FUN_0123ffd0();
          FUN_00e7bac0();
          local_a8 = local_48;
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165bdc0();
          FUN_00e7b820();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (NAN(local_98)) {
        uVar8 = FUN_00e7bdb0();
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_38;
        }
        FUN_00e7bcc0();
        FUN_016cb850(local_98,0);
        uVar8 = FUN_00e7cd00();
      }
      plVar4 = local_58;
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025fa538;
      uVar13 = _UNK_02393728;
      *(undefined8 *)((longlong)puVar9 + 0xc) = _DAT_02393720;
      *(undefined8 *)((longlong)puVar9 + 0x14) = uVar13;
      uVar13 = FUN_00d500e0();
      *(longlong **)((longlong)puVar9 + 0xc) = plVar4;
      *(undefined8 *)((longlong)puVar9 + 0x14) = uVar8;
      uVar14 = 0;
      cVar2 = FUN_016bf700(uVar13,0);
      if (cVar2 == '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        bVar12 = true;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = *local_50;
        local_c8 = '\0';
        local_110 = puVar5;
        local_108 = 0;
        local_f8 = 0;
        local_100 = puVar9;
        FUN_016c4850(1,&local_110,&local_100,0,uVar14);
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar12 = false;
      }
      FUN_00d50b20();
      goto LAB_016c3e0b;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  bVar12 = true;
LAB_016c3e0b:
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


