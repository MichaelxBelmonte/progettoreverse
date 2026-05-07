// Function: FUN_013206a0
// Address: 013206a0
// Size: 1170 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01320ae6) */
/* WARNING: Removing unreachable block (ram,0x01320af2) */

void FUN_013206a0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_025d8858;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  FUN_00d500e0();
  puVar2[2] = *unaff_RSI;
  lVar3 = *param_2;
  local_60 = puVar2;
  if (lVar3 != 0) {
    lVar10 = puVar2[3];
    if (lVar10 != lVar3) {
      FUN_00d50b00();
      puVar2[3] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar3 = local_58;
    if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar10 = puVar2[4];
    if (lVar10 == lVar3) {
      FUN_00d50b20();
    }
    else {
      puVar2[4] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    plVar8 = (longlong *)0x0;
    if (*param_2 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = *param_2;
      while( true ) {
        lVar3 = (longlong)(int)local_40;
        iVar9 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar9);
        if (*(int *)(local_48 + 0xc) <= iVar9) break;
        lVar10 = *(longlong *)(local_48 + 0x10);
        lVar3 = *(longlong *)(lVar10 + 8 + lVar3 * 8);
        local_58 = lVar3;
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar10);
        lVar1 = local_58;
        pVar7 = (pthread_key_t)lVar10;
        if ((pvVar4 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar3 = lVar1, lVar10 != 0)) {
          lVar3 = *(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        plVar8 = *(longlong **)(lVar3 + 0x38);
        pvVar4 = _pthread_getspecific(pVar7);
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        lVar3 = (**(code **)(*plVar8 + 0x378))();
        *(float *)(puVar2 + 6) = (float)lVar3 + *(float *)(puVar2 + 6);
        if (local_40._4_4_ != 0) {
          if (local_40 < 0) {
            iVar9 = -local_40._4_4_;
          }
          else {
            local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
            FUN_00d23690();
            local_38 = local_38 + local_40._4_4_;
            iVar9 = 0;
          }
          local_40 = CONCAT44(iVar9,(int)local_40);
        }
      }
      FUN_00115190();
      plVar8 = (longlong *)*param_2;
    }
    FUN_00c8e690();
    lVar3 = local_58;
    if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != 0)) {
      FUN_00d50b20();
    }
    FUN_00c92170();
    FUN_00c92160();
    lVar10 = puVar2[5];
    if (lVar10 == lVar3) {
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      puVar2[5] = lVar3;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
    }
    lVar3 = *param_2;
    if (lVar3 != 0) {
      local_50 = 0;
      local_58 = 0;
      local_38 = 0;
      local_40 = 0;
      local_48 = lVar3;
      if (0 < *(int *)(lVar3 + 0xc)) {
        lVar10 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar10 * 8);
          pVar7 = (pthread_key_t)plVar8;
          local_58 = lVar1;
          pvVar4 = _pthread_getspecific(pVar7);
          lVar6 = lVar1;
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            lVar6 = *(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
          }
          plVar8 = *(longlong **)(lVar6 + 0x38);
          pvVar4 = _pthread_getspecific(pVar7);
          if ((pvVar4 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          lVar6 = (**(code **)(*plVar8 + 0x378))();
          *(float *)(*(longlong *)(local_60[5] + 0x10) + lVar10 * 4) =
               (float)lVar6 / *(float *)(local_60 + 6);
          FUN_00d403d0();
          lVar6 = DAT_02729590;
          if (DAT_02729590 != 0) {
            FUN_00d50b00();
          }
          local_80 = lVar6;
          local_78 = '\x01';
          local_68 = '\0';
          plVar8 = &local_70;
          local_70 = lVar1;
          FUN_00d41430(plVar8,&local_80);
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
          local_40 = CONCAT44(local_40._4_4_,(int)lVar10);
        } while ((int)lVar10 < *(int *)(lVar3 + 0xc));
      }
      FUN_00115190();
    }
  }
  *unaff_RDI = local_60;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


