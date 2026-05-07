// Function: FUN_0137bae0
// Address: 0137bae0
// Size: 1198 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0137bcd6) */

float FUN_0137bae0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  longlong unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  longlong local_70;
  char local_68;
  float local_4c;
  longlong local_40;
  longlong local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (*(int *)(lVar1 + 0xc) < 1) {
    local_4c = 0.0;
    lVar11 = 0;
    bVar3 = false;
    local_40 = 0;
    bVar2 = false;
    local_38 = 0;
    bVar4 = false;
  }
  else {
    iVar7 = 0;
    local_4c = 0.0;
    lVar10 = 0;
    lVar11 = 0;
    bVar3 = false;
    local_40 = 0;
    bVar2 = false;
    local_38 = 0;
    bVar4 = false;
    do {
      lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar10 * 8);
      if (lVar11 == lVar9) {
        if ((!bVar3) && (lVar11 != 0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (lVar11 != 0)) {
          FUN_00d50b20();
          bVar3 = true;
          lVar11 = lVar9;
        }
        else {
          bVar3 = true;
          lVar11 = lVar9;
        }
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_70 == local_40) {
        if ((!bVar2) && (local_70 != 0)) {
          bVar2 = true;
          if (local_68 != '\0') goto LAB_0137bcee;
          FUN_00d50b00();
LAB_0137bca7:
          bVar2 = true;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
        if (bVar2) {
          if (local_40 != 0) {
            FUN_00d50b20();
            local_40 = local_70;
            goto LAB_0137bca7;
          }
          local_40 = local_70;
          bVar2 = true;
        }
        else {
          local_40 = local_70;
          bVar2 = true;
        }
      }
      else if ((bVar2) && (local_40 != 0)) {
        FUN_00d50b20();
        local_40 = local_70;
        bVar2 = true;
      }
      else {
        local_40 = local_70;
        bVar2 = true;
      }
LAB_0137bcee:
      pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
        param_1 = local_40;
      }
      cVar6 = FUN_014bc070();
      if (cVar6 == '\0') {
        pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        iVar7 = iVar7 + 1;
        if (local_70 == local_38) {
          lVar9 = local_38;
          bVar5 = bVar4;
          if ((!bVar4) && (local_70 != 0)) {
            if (local_68 != '\0') goto joined_r0x0137bded;
            FUN_00d50b00();
            bVar5 = true;
          }
LAB_0137be40:
          local_38 = lVar9;
          bVar4 = bVar5;
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
            bVar5 = true;
            lVar9 = local_70;
            if ((bVar4) && (local_38 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0137be40;
          }
          lVar9 = local_70;
          if ((bVar4) && (local_38 != 0)) {
            FUN_00d50b20();
          }
joined_r0x0137bded:
          local_38 = lVar9;
          bVar4 = true;
        }
        if (local_38 == 0) {
          local_38 = 0;
        }
        else {
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_38;
          }
          FUN_013dd6a0();
          pvVar8 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar12 = (float)FUN_014bae60();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_4c = local_4c + fVar12;
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar1 + 0xc));
    if (iVar7 < 1) {
      local_4c = 0.0;
    }
    else {
      local_4c = local_4c / (float)iVar7;
    }
  }
  FUN_00d50b20();
  if ((bVar4) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar3) && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  return local_4c;
}


