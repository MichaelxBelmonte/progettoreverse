// Function: FUN_0135e940
// Address: 0135e940
// Size: 1620 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0135ef04) */
/* WARNING: Removing unreachable block (ram,0x0135ef10) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0135e940(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined *puVar10;
  longlong *plVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  undefined1 local_b8 [8];
  longlong local_a8;
  char local_a0;
  longlong local_88;
  char local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined1 local_59;
  double local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  double local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar10 = &DAT_02572358;
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  if (((*(longlong *)(unaff_RSI + 0x1f8) == 0) && (*(longlong *)(unaff_RSI + 0x200) == 0)) &&
     (*(longlong *)(unaff_RSI + 0x148) != 0)) {
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 == 3) goto LAB_0135ecb2;
  }
  if (*param_2 != 0) {
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_014bacf0();
    lVar6 = *(longlong *)(unaff_RSI + 0x40);
    if (0 < *(int *)(lVar6 + 0xc)) {
      local_38 = DAT_023b2568;
      lVar12 = 0;
      lVar7 = 0;
      bVar1 = false;
      local_78 = param_2;
      local_70 = puVar4;
      do {
        pVar9 = (pthread_key_t)puVar10;
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar12 * 8);
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_013de8d0();
        dVar14 = (double)((ulonglong)(local_58 - dVar14) & _DAT_023908f0);
        bVar2 = bVar1;
        if (dVar14 < local_38) {
          local_38 = dVar14;
          if (lVar7 == lVar6) {
            if ((!bVar1) && (lVar7 != 0)) {
              local_40 = lVar7;
              FUN_00d50b00();
              lVar7 = local_40;
              bVar2 = true;
            }
          }
          else {
            local_40 = lVar7;
            if (lVar6 != 0) {
              FUN_00d50b00();
            }
            bVar2 = true;
            lVar7 = lVar6;
            if ((bVar1) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar1 = bVar2;
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        puVar4 = local_70;
        plVar11 = local_78;
        lVar12 = lVar12 + 1;
        lVar6 = *(longlong *)(unaff_RSI + 0x40);
        puVar10 = (undefined *)(longlong)(int)*(pthread_key_t *)(lVar6 + 0xc);
      } while (lVar12 < (longlong)puVar10);
      if (lVar7 != 0) {
        plVar13 = (longlong *)*local_78;
        local_40 = lVar7;
        pvVar5 = _pthread_getspecific(*(pthread_key_t *)(lVar6 + 0xc));
        pVar9 = (pthread_key_t)puVar10;
        if (pvVar5 != (void *)0x0) {
          plVar13 = (longlong *)*plVar11;
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
        }
        lVar6 = (**(code **)(*plVar13 + 0x380))();
        pvVar5 = _pthread_getspecific(pVar9);
        if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pVar9 = (pthread_key_t)local_40;
        }
        lVar7 = FUN_013de650();
        if ((local_38 < DAT_0240f0f8) &&
           (plVar11 = (longlong *)(lVar6 - lVar7), (longlong)plVar11 < 0)) {
          pvVar5 = _pthread_getspecific(pVar9);
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            pVar9 = (pthread_key_t)local_40;
          }
          FUN_013de560();
          if (local_48 == '\0') {
            if (local_50 == 0) goto LAB_0135ef90;
            FUN_00d50b00();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if (local_50 == 0) goto LAB_0135ef90;
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar8 = FUN_014bc340();
          lVar6 = local_50;
          local_78 = plVar11;
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar8 = FUN_00d50b20();
          }
          local_38 = (double)CONCAT44(local_38._4_4_,(int)CONCAT71((int7)((ulonglong)uVar8 >> 8),1))
          ;
          if (lVar6 == 0) {
            local_58 = 0.0;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_014bc340();
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar8 = FUN_014d1d00();
            lVar6 = local_50;
            if (local_50 == 0) {
              local_58 = 0.0;
              lVar6 = 0;
            }
            else if (local_48 == '\0') {
              uVar8 = FUN_00d50b00();
              local_58 = (double)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48 = '\0';
              local_58 = (double)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if (lVar6 != 0) {
              local_88 = local_40;
              local_80 = '\0';
              FUN_0133bd20(local_78,&local_88,local_b8,&local_59,1);
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              local_48 = '\0';
              local_50 = lVar6;
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              local_50 = local_40;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              local_38 = (double)((ulonglong)local_38 & 0xffffffff00000000);
            }
          }
          FUN_00d50b20();
          if (local_58._0_1_ != '\0' && local_38._0_1_ == '\0') {
            FUN_00d50b20();
          }
        }
LAB_0135ef90:
        *unaff_RDI = puVar4;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if (!bVar1) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
    }
  }
LAB_0135ecb2:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


