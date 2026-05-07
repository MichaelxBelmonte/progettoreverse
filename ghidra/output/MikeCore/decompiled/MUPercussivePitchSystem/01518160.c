// Function: FUN_01518160
// Address: 01518160
// Size: 1812 bytes
// Class: MUPercussivePitchSystem


void FUN_01518160(double param_1,double param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  longlong *plVar5;
  void *pvVar6;
  uint in_ECX;
  pthread_key_t pVar7;
  undefined8 *in_RDX;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 extraout_XMM0_Qa;
  double dVar17;
  undefined1 *local_res8;
  undefined1 *local_res10;
  undefined8 local_128;
  undefined1 local_120;
  longlong *local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  longlong *in_stack_ffffffffffffff60;
  char local_98 [8];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  
  pVar7 = in_ECX;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = unaff_RDI;
  if (1 < *(int *)(*unaff_RSI + 0xc)) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0013dd30();
    (**(code **)(*plVar5 + 0x18))();
    if (plVar5 == unaff_RDI) {
      FUN_00d50b20();
      plVar5 = unaff_RDI;
    }
    else if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((char)in_ECX != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_98[0] = '\0';
      uVar11 = FUN_01512be0();
      FUN_01513590(uVar11,0);
      in_stack_ffffffffffffff60 = unaff_RDI;
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_3 != '\0') {
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_01512890();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23340();
  cVar2 = local_98[0];
  pcVar8 = &stack0xffffffffffffff90;
  if (local_98[0] != '\0') {
    pcVar8 = local_98;
  }
  *pcVar8 = '\0';
  if ((local_98[0] != '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar2 == '\0') && (in_stack_ffffffffffffff60 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  local_78 = in_stack_ffffffffffffff60;
  FUN_00d23740();
  uVar9 = in_ECX & 0xff;
  uVar11 = 0;
  FUN_01517980(param_1,param_2,uVar9,param_3);
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar12 = FUN_01655040();
  pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar13 = FUN_01655100();
  uVar12 = FUN_00e7b500(uVar12);
  lVar1 = *unaff_RSI;
  local_d8 = uVar12;
  local_d0 = uVar13;
  if (lVar1 != 0) {
    local_98[0] = '\0';
    local_80 = 0;
    local_88 = 0;
    local_90 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar10 = 0;
      do {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01655040();
        pvVar6 = _pthread_getspecific((pthread_key_t)uVar11);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_016551c0();
        dVar17 = param_1;
        if (param_1 <= dVar14) {
          dVar17 = dVar14;
        }
        dVar14 = param_2;
        if (dVar15 <= param_2) {
          dVar14 = dVar15;
        }
        if (dVar17 < dVar14) {
          dVar15 = dVar14 - dVar17;
          FUN_00e7b500(dVar17);
          dVar16 = (double)FUN_00e7b600();
          if (NAN(dVar16)) {
            local_110 = 0;
            local_100 = 0;
            local_f8 = *in_RDX;
            local_f0 = 0;
            uVar11 = 1;
            local_118 = plVar5;
            local_108 = uVar12;
            FUN_01517980(dVar17,dVar14,uVar9,param_3);
          }
          else {
            if (dVar17 < dVar16) {
              uVar11 = 1;
              local_c8 = dVar15;
              FUN_01517980(dVar17,dVar16,uVar9,param_3);
              dVar15 = local_c8;
            }
            if (dVar16 + dVar15 < dVar14) {
              local_128 = *in_RDX;
              local_120 = 0;
              uVar11 = 1;
              FUN_01517980(dVar16 + dVar15,&local_128,uVar9,param_3);
            }
          }
        }
        lVar10 = lVar10 + 1;
        local_88 = CONCAT44(local_88._4_4_,(int)lVar10);
      } while ((int)lVar10 < *(int *)(lVar1 + 0xc));
    }
    uVar12 = FUN_00277f20();
    in_stack_ffffffffffffff60 = local_78;
  }
  if (plVar5 != unaff_RDI) {
    if ((char)in_ECX != '\0') {
      local_98[0] = '\0';
      bVar3 = FUN_01512be0(uVar12,0);
      bVar4 = FUN_01513590(extraout_XMM0_Qa,0);
      if (((bVar3 | bVar4) == 1) && (local_res8 != (undefined1 *)0x0)) {
        *local_res8 = 1;
      }
    }
    in_stack_ffffffffffffff60 = local_78;
    if (param_3 != '\0') {
      local_e0 = 0;
      local_e8 = plVar5;
      bVar3 = FUN_01512890();
      if ((bVar3 & local_res10 != (undefined1 *)0x0) == 1) {
        *local_res10 = 1;
      }
    }
  }
  if (in_stack_ffffffffffffff60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


