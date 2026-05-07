// Function: FUN_015278a0
// Address: 015278a0
// Size: 2291 bytes
// Class: GNFraction


/* WARNING: Removing unreachable block (ram,0x01527f81) */
/* WARNING: Removing unreachable block (ram,0x01527f8a) */
/* WARNING: Removing unreachable block (ram,0x01527d40) */
/* WARNING: Removing unreachable block (ram,0x01527d49) */
/* WARNING: Removing unreachable block (ram,0x01527de7) */
/* WARNING: Removing unreachable block (ram,0x01527df3) */
/* WARNING: Removing unreachable block (ram,0x01528141) */
/* WARNING: Removing unreachable block (ram,0x0152814a) */

void FUN_015278a0(ulonglong param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  pthread_key_t pVar13;
  longlong unaff_RDI;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined8 *unaff_R14;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  uint local_7c;
  longlong local_60;
  char local_58;
  undefined8 *local_38;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) == 0) {
    *(int *)(unaff_RDI + 0x40) = -param_2;
    uVar11 = iVar2 - param_2;
    if (-1 < (int)uVar11) {
      uVar12 = (iVar2 - param_2) + 1;
      param_1 = (ulonglong)uVar12;
      uVar14 = 0;
      unaff_R14 = (undefined8 *)0x0;
      plVar5 = (longlong *)0x0;
      do {
        plVar4 = (longlong *)FUN_011d2cb0();
        (**(code **)(*plVar4 + 0x18))();
        cVar1 = (char)unaff_R14;
        if (plVar5 == plVar4) {
          plVar4 = plVar5;
          if ((cVar1 == '\0') && (plVar5 != (longlong *)0x0)) {
            unaff_R14 = (undefined8 *)0x1;
          }
          else if (plVar5 == (longlong *)0x0) {
            plVar4 = (longlong *)0x0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          unaff_R14 = (undefined8 *)0x1;
          if ((cVar1 != '\0') && (plVar5 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar2 = *(int *)(unaff_RDI + 0x40);
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        plVar5 = plVar4;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar5 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        *(uint *)(plVar5 + 8) = uVar14 - iVar2;
        FUN_01527350();
        uVar14 = uVar14 + 1;
        plVar5 = plVar4;
      } while (uVar12 != uVar14);
      local_7c = 0;
      local_38 = unaff_R14;
      goto joined_r0x015279ea;
    }
    local_38 = (undefined8 *)0x0;
    local_7c = 0;
    if (uVar11 < 0x80000000) goto LAB_01527c4e;
  }
  else {
    local_7c = *(int *)(unaff_RDI + 0x40) + param_2;
    if ((int)local_7c < 0) {
      uVar11 = iVar2 - param_2;
      uVar16 = (ulonglong)uVar11;
      local_38 = (undefined8 *)0x0;
      plVar5 = (longlong *)0x0;
      do {
        while( true ) {
          plVar4 = (longlong *)FUN_011d2cb0();
          (**(code **)(*plVar4 + 0x18))();
          cVar1 = (char)local_38;
          if (plVar5 == plVar4) {
            plVar4 = plVar5;
            if ((cVar1 == '\0') && (plVar5 != (longlong *)0x0)) {
              local_38 = (undefined8 *)0x1;
            }
            else if (plVar5 == (longlong *)0x0) {
              plVar4 = (longlong *)0x0;
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = (undefined8 *)0x1;
            if ((cVar1 != '\0') && (plVar5 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01527510();
          uVar12 = *(uint *)(unaff_RDI + 0x40);
          *(uint *)(unaff_RDI + 0x40) = uVar12 + 1;
          pvVar6 = _pthread_getspecific((pthread_key_t)uVar16);
          plVar5 = plVar4;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) break;
          *(uint *)(plVar4 + 8) = ~uVar12;
          local_7c = local_7c + 1;
          if (local_7c == 0) goto LAB_01527b05;
        }
        *(uint *)(plVar4[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x40) = ~uVar12;
        local_7c = local_7c + 1;
      } while (local_7c != 0);
LAB_01527b05:
      local_7c = 0;
    }
    else {
      uVar11 = iVar2 + *(int *)(unaff_RDI + 0x40);
      local_38 = (undefined8 *)0x0;
      plVar4 = (longlong *)0x0;
    }
    unaff_R14 = &DAT_02802558;
    while (param_1 = (ulonglong)uVar11,
          *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc) <= (int)uVar11) {
      plVar5 = (longlong *)FUN_011d2cb0();
      (**(code **)(*plVar5 + 0x18))();
      cVar1 = (char)local_38;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        if ((cVar1 == '\0') && (plVar4 != (longlong *)0x0)) {
          local_38 = (undefined8 *)0x1;
        }
        else if (plVar4 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = (undefined8 *)0x1;
        if ((cVar1 != '\0') && (plVar4 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar2 = *(int *)(*(longlong *)(unaff_RDI + 0x48) + 0xc);
      iVar3 = *(int *)(unaff_RDI + 0x40);
      pvVar6 = _pthread_getspecific((pthread_key_t)unaff_RDI);
      plVar4 = plVar5;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar4 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      *(int *)(plVar4 + 8) = iVar2 - iVar3;
      FUN_01527350();
      plVar4 = plVar5;
    }
joined_r0x015279ea:
    if (plVar4 != (longlong *)0x0) {
      if ((char)local_38 != '\0') {
        FUN_00d50b20();
      }
      local_38 = (undefined8 *)0x0;
    }
    if ((int)local_7c <= (int)uVar11) {
LAB_01527c4e:
      lVar8 = (longlong)(int)local_7c;
      lVar7 = 0;
      do {
        lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10) + lVar8 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            FUN_00d50b00();
            lVar18 = lVar7;
            goto LAB_01527cd0;
          }
          local_38 = (undefined8 *)((ulonglong)local_38 & 0xffffffff);
          if (param_3 == '\0') goto LAB_01527cdd;
LAB_01527d80:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aaa0();
        }
        else {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          if (((char)local_38 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01527cd0:
          local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
          lVar7 = lVar18;
          if (param_3 != '\0') goto LAB_01527d80;
LAB_01527cdd:
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aa70();
          cVar1 = FUN_00d23d70();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') goto LAB_01527d80;
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
        lVar8 = lVar8 + 1;
        unaff_R14 = local_38;
      } while (uVar11 + 1 != (int)lVar8);
      goto LAB_01527e4c;
    }
  }
  lVar7 = 0;
LAB_01527e4c:
  if (param_3 == '\0') {
    if (0 < (int)local_7c) {
      uVar16 = 0;
      do {
        lVar8 = *(longlong *)(*(longlong *)(unaff_RDI + 0x48) + 0x10);
        lVar18 = *(longlong *)(lVar8 + uVar16 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (lVar18 != 0) {
            lVar8 = FUN_00d50b00();
          }
          if (((char)local_38 == '\0') || (lVar7 == 0)) {
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            lVar7 = lVar18;
          }
          else {
            uVar9 = FUN_00d50b20();
            local_38 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            lVar7 = lVar18;
          }
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar2 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar2 != -1) {
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        uVar16 = uVar16 + 1;
      } while (local_7c != uVar16);
    }
    lVar8 = *(longlong *)(unaff_RDI + 0x48);
    if ((int)(uVar11 + 1) < *(int *)(lVar8 + 0xc)) {
      lVar17 = (longlong)(int)(uVar11 + 1);
      iVar2 = (*(int *)(lVar8 + 0xc) - uVar11) + -2;
      lVar18 = lVar7;
      while( true ) {
        puVar15 = (undefined8 *)((ulonglong)local_38 & 0xffffffff);
        lVar8 = *(longlong *)(lVar8 + 0x10);
        lVar7 = *(longlong *)(lVar8 + lVar17 * 8);
        if (lVar18 == lVar7) {
          lVar7 = lVar18;
          puVar10 = puVar15;
          pVar13 = (pthread_key_t)local_38;
          if (((char)puVar15 == '\0') && (lVar18 != 0)) {
            FUN_00d50b00();
            puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
            pVar13 = (pthread_key_t)local_38;
          }
        }
        else {
          if (lVar7 != 0) {
            lVar8 = FUN_00d50b00();
          }
          puVar10 = (undefined8 *)CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
          pVar13 = (pthread_key_t)local_38;
          if (((char)puVar15 != '\0') && (lVar18 != 0)) {
            FUN_00d50b20();
            pVar13 = (pthread_key_t)local_38;
          }
        }
        local_38 = puVar10;
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar3 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar3 != -1) {
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        bVar19 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar19) break;
        lVar8 = *(longlong *)(unaff_RDI + 0x48);
        lVar17 = lVar17 + 1;
        lVar18 = lVar7;
      }
    }
    cVar1 = (char)local_38;
    FUN_01528450();
  }
  else {
    cVar1 = (char)local_38;
  }
  if ((cVar1 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}


