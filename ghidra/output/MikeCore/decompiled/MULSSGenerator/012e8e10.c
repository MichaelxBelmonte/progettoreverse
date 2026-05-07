// Function: FUN_012e8e10
// Address: 012e8e10
// Size: 1774 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x012e93cf) */
/* WARNING: Removing unreachable block (ram,0x012e93d8) */
/* WARNING: Removing unreachable block (ram,0x012e9389) */
/* WARNING: Removing unreachable block (ram,0x012e9395) */
/* WARNING: Removing unreachable block (ram,0x012e9456) */
/* WARNING: Removing unreachable block (ram,0x012e945f) */
/* WARNING: Removing unreachable block (ram,0x012e8f82) */
/* WARNING: Removing unreachable block (ram,0x012e8f8b) */
/* WARNING: Removing unreachable block (ram,0x012e9417) */
/* WARNING: Removing unreachable block (ram,0x012e9420) */
/* WARNING: Removing unreachable block (ram,0x012e8f45) */
/* WARNING: Removing unreachable block (ram,0x012e8f51) */
/* WARNING: Removing unreachable block (ram,0x012e8fca) */
/* WARNING: Removing unreachable block (ram,0x012e8fd3) */
/* WARNING: Removing unreachable block (ram,0x012e949a) */
/* WARNING: Removing unreachable block (ram,0x012e94a7) */
/* WARNING: Removing unreachable block (ram,0x012e9307) */
/* WARNING: Removing unreachable block (ram,0x012e9330) */
/* WARNING: Removing unreachable block (ram,0x012e9309) */
/* WARNING: Removing unreachable block (ram,0x012e9332) */
/* WARNING: Removing unreachable block (ram,0x012e9017) */
/* WARNING: Removing unreachable block (ram,0x012e9024) */

longlong * FUN_012e8e10(double param_1,double param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  uint uVar11;
  code *in_RCX;
  code *pcVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *in_RDX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar15;
  longlong lVar16;
  ulonglong local_80;
  int local_60;
  longlong local_40;
  char local_38;
  
  lVar3 = *(longlong *)(unaff_RSI + 0x138);
  if (lVar3 == 0) {
LAB_012e8ea5:
    lVar8 = *(longlong *)(unaff_RSI + 0xb0);
    if (lVar8 == 0) goto LAB_012e9168;
    if (*(int *)(lVar8 + 0xc) < 1) {
      bVar4 = false;
      lVar16 = 0;
    }
    else {
      lVar15 = 0;
      lVar16 = 0;
      bVar4 = false;
      do {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar15 * 8);
        cVar5 = (*in_RCX)(param_1,param_2);
        if (cVar5 != '\0') {
          if (*in_RDX != 0) {
            local_38 = '\0';
            cVar5 = FUN_00d24090();
            local_40 = lVar9;
            if (cVar5 != '\0') goto LAB_012e8ef4;
          }
          if (lVar16 == 0) {
            FUN_0025e9a0();
            if (local_40 == 0) {
              lVar16 = 0;
            }
            else {
              bVar4 = true;
              lVar16 = local_40;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          local_38 = '\0';
          FUN_00d24b60(0,FUN_012e8c90,0);
          local_40 = lVar9;
        }
LAB_012e8ef4:
        lVar15 = lVar15 + 1;
      } while ((int)lVar15 < *(int *)(lVar8 + 0xc));
    }
    FUN_001159b0();
LAB_012e94f5:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (bVar4) goto LAB_012e951b;
    if (lVar16 != 0) {
      FUN_00d50b00();
      goto LAB_012e951b;
    }
  }
  else {
    pcVar12 = in_RCX;
    FUN_00d50b00();
    pVar10 = (pthread_key_t)pcVar12;
    pvVar7 = _pthread_getspecific(pVar10);
    if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      cVar5 = *(char *)(lVar3 + 0x38);
    }
    else {
      cVar5 = *(char *)(*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8)
                       + 0x38);
    }
    if (cVar5 == '\0') goto LAB_012e8ea5;
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar14 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar1 = *(int *)(lVar8 + 0x40);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    iVar2 = *(int *)(lVar8 + 0x3c);
    pvVar7 = _pthread_getspecific(pVar10);
    lVar8 = lVar3;
    if ((pvVar7 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar16 + 0x154) & 1) * 8);
    }
    uVar11 = (uint)(param_1 / (double)iVar14 + (double)iVar1);
    uVar13 = (ulonglong)uVar11;
    iVar14 = (int)((double)*(int *)(lVar8 + 0x40) + (param_1 + param_2) / (double)iVar2);
    uVar6 = 0;
    if (-1 < (int)uVar11) {
      uVar6 = uVar11;
    }
    if ((int)uVar6 <= iVar14) {
      lVar16 = 0;
      bVar4 = false;
      local_80 = (ulonglong)uVar6;
LAB_012e91cc:
      pVar10 = (pthread_key_t)uVar13;
      pvVar7 = _pthread_getspecific(pVar10);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x48) + 0xc);
      }
      else {
        iVar1 = *(int *)(*(longlong *)
                          (*(longlong *)
                            (lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x48) +
                        0xc);
      }
      if ((longlong)local_80 < (longlong)iVar1) {
        pvVar7 = _pthread_getspecific(pVar10);
        lVar8 = lVar3;
        if ((pvVar7 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
        }
        lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x48) + 0x10) + local_80 * 8);
        uVar13 = local_80;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)uVar13);
        if ((pvVar7 == (void *)0x0) || (lVar15 = FUN_00e8b990(), lVar15 == 0)) {
          lVar15 = *(longlong *)(lVar8 + 0x38);
        }
        else {
          lVar15 = *(longlong *)
                    (*(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8) +
                    0x38);
        }
        if (lVar15 != 0) {
          local_60 = -1;
LAB_012e9303:
          do {
            lVar9 = (longlong)local_60;
            local_60 = local_60 + 1;
            if (*(int *)(lVar15 + 0xc) <= local_60) goto LAB_012e94c0;
            lVar9 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + 8 + lVar9 * 8);
            cVar5 = (*in_RCX)(param_1,param_2);
            if (cVar5 != '\0') {
              if (*in_RDX != 0) {
                local_38 = '\0';
                cVar5 = FUN_00d24090();
                local_40 = lVar9;
                if (cVar5 != '\0') goto LAB_012e9303;
              }
              if (lVar16 == 0) {
                FUN_0025e9a0();
                if (local_40 == 0) {
                  lVar16 = 0;
                }
                else {
                  bVar4 = true;
                  lVar16 = local_40;
                  if (local_38 == '\0') {
                    FUN_00d50b00();
                  }
                }
              }
              local_38 = '\0';
              cVar5 = FUN_00d24090();
              local_40 = lVar9;
              if (cVar5 == '\0') {
                local_38 = '\0';
                FUN_00d24b60(0,FUN_012e8c90,0);
              }
            }
          } while( true );
        }
        goto LAB_012e94cc;
      }
      goto LAB_012e94f5;
    }
LAB_012e9168:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  lVar16 = 0;
LAB_012e951b:
  *unaff_RDI = lVar16;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_012e94c0:
  FUN_001159b0();
LAB_012e94cc:
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  uVar13 = local_80 + 1;
  local_80 = uVar13;
  if (uVar13 == iVar14 + 1) goto LAB_012e94f5;
  goto LAB_012e91cc;
}


