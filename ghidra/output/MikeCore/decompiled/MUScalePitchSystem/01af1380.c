// Function: FUN_01af1380
// Address: 01af1380
// Size: 2636 bytes
// Class: MUScalePitchSystem


/* WARNING: Removing unreachable block (ram,0x01af1dbb) */
/* WARNING: Removing unreachable block (ram,0x01af1dc7) */

void FUN_01af1380(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_01af1e04;
  FUN_01a1d6e0();
  iVar3 = (**(code **)(*local_40 + 0xd20))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar3 == 0) goto LAB_01af1e04;
  FUN_01ad6350();
  FUN_01a1d6e0();
  (**(code **)(*local_50 + 0xe30))();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (longlong *)0x0) || (*(int *)((longlong)plVar8 + 0xc) == 0)) {
    FUN_01a1d6e0();
    (**(code **)(*local_50 + 0xe70))();
    plVar1 = local_40;
    if (plVar8 == local_40) {
LAB_01af1512:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar10 = plVar8 != (longlong *)0x0;
        plVar8 = plVar1;
        if (bVar10) {
          FUN_00d50b20();
        }
        goto LAB_01af1512;
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar8 = plVar1;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_01af1e04;
  }
  if (*(int *)((longlong)plVar8 + 0xc) != 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    plVar1 = *(longlong **)(unaff_RDI + 0x2a8);
    if (plVar1 == plVar4) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x2a8) = plVar4;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (0 < *(int *)((longlong)plVar8 + 0xc)) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(plVar8[2] + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        plVar4 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_0125a2c0();
        if (plVar4 == (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          plVar7 = plVar2;
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar2;
            plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*plVar7 + 0x3a8))();
        }
        else {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar4;
          }
          FUN_0152ebe0();
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar2;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar2;
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar12 = (float)(**(code **)(*plVar7 + 0x3a0))();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar2;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar2;
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar13 = (float)(**(code **)(*plVar7 + 0x3a0))();
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        uVar14 = FUN_00d46530();
        plVar7 = DAT_027e3b98;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3b98;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3b98 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0(fVar11);
        plVar7 = DAT_027e3ba0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3ba0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3ba0 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0(fVar11 - fVar12);
        plVar7 = DAT_02708700;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_02708700;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_02708700 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0((fVar11 - fVar12) / (fVar13 - fVar12));
        plVar7 = DAT_027e3bb0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3bb0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3bb0 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        uVar14 = FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar4;
          }
          FUN_0152e220();
          uVar14 = FUN_00d46530();
          plVar7 = DAT_027e3bb8;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar14 = FUN_00d50b00();
              plVar7 = DAT_027e3bb8;
            }
          }
          else {
            local_48 = '\0';
          }
          DAT_027e3bb8 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = plVar7;
          uVar14 = FUN_00ca0840(uVar14,&local_40);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((longlong)plVar8 + 0xc));
    }
  }
  FUN_00d50b20();
LAB_01af1e04:
  FUN_00d50b20();
  return;
}


