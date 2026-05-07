// Function: FUN_018ba360
// Address: 018ba360
// Size: 1454 bytes
// Class: GNString
// String references:
//   "%lld"
//   " + %lld"


/* WARNING: Removing unreachable block (ram,0x018ba4cf) */
/* WARNING: Removing unreachable block (ram,0x018ba4db) */
/* WARNING: Removing unreachable block (ram,0x018ba89e) */
/* WARNING: Removing unreachable block (ram,0x018ba8ae) */

undefined8 * FUN_018ba360(pthread_key_t param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  code *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar11;
  longlong lVar12;
  longlong local_c8;
  char local_c0;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  
  lVar11 = *(longlong *)(unaff_RSI + 0x60);
  if ((lVar11 != 0) || (lVar11 = *(longlong *)(unaff_RSI + 0x58), lVar11 != 0)) {
    FUN_00d50b00();
  }
  if ((lVar11 != 0) && (iVar4 = FUN_00d8c7a0(), iVar4 != 0)) {
    plVar1 = *(longlong **)(unaff_RSI + 0x80);
    FUN_01152ba0();
    lVar12 = DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      lVar12 = DAT_02802688;
      if (cVar3 != '\0') {
        lVar12 = *(longlong *)(unaff_RSI + 0x80);
      }
    }
    if (lVar12 != 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017d3de0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018c71e0();
      if ((local_c0 == '\0') && (local_c8 != 0)) {
        FUN_00d50b00();
      }
      if (((char)local_88 != '\0') && (local_90 != (undefined *)0x0)) {
        FUN_00d50b20();
      }
      pcVar2 = DAT_025795c0;
      if (local_c8 != 0) {
        local_48 = lVar11;
        if (*(int *)(local_c8 + 0xc) < 1) {
          local_40 = 0;
          local_38 = (undefined8 *)0x0;
        }
        else {
          lVar11 = 0;
          local_38 = (undefined8 *)0x0;
          local_40 = 0;
          pcVar10 = DAT_025795c0;
          do {
            lVar12 = *(longlong *)(*(longlong *)(local_c8 + 0x10) + lVar11 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)pcVar10);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
            }
            plVar1 = *(longlong **)(lVar12 + 0x80);
            FUN_01152ba0();
            if (plVar1 == (longlong *)0x0) {
LAB_018ba616:
              pVar9 = (pthread_key_t)pcVar10;
              lVar12 = DAT_02802688;
            }
            else {
              (**(code **)(*plVar1 + 0x360))();
              cVar3 = FUN_00e85ea0();
              pVar9 = (pthread_key_t)pcVar10;
              if (cVar3 == '\0') goto LAB_018ba616;
              lVar12 = *(longlong *)(lVar12 + 0x80);
            }
            if (lVar12 != 0) {
              if (local_38 == (undefined8 *)0x0) {
                puVar7 = (undefined8 *)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar7 = &DAT_025795a8;
                (*pcVar2)();
                local_38 = puVar7;
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_017cac30();
                local_88 = 1;
                pcVar10 = (code *)&DAT_024da828;
                local_90 = &DAT_024da828;
                FUN_00d8cb40(&DAT_024da828,&local_90);
                local_78 = local_58;
                local_70 = 0;
                if (local_50 == '\0') {
                  if (local_58 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_70 = '\x01';
                uVar8 = FUN_00d93870();
                if ((local_70 != '\0') && (local_78 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  uVar8 = FUN_00d50b20();
                }
                local_40 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
              }
              else {
                pvVar5 = _pthread_getspecific(pVar9);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = FUN_017cac30();
                local_88 = 1;
                pcVar10 = (code *)&DAT_024da828;
                local_90 = &DAT_024da828;
                FUN_00d8cb40(&DAT_024da828,&local_90);
                local_68 = local_58;
                local_60 = 0;
                if (local_50 == '\0') {
                  if (local_58 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_60 = '\x01';
                FUN_00d93870();
                if ((local_60 != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            lVar11 = lVar11 + 1;
          } while ((int)lVar11 < *(int *)(local_c8 + 0xc));
        }
        FUN_018bc370();
        FUN_00d50b20();
        uVar8 = local_40;
        lVar11 = local_48;
        if (local_38 != (undefined8 *)0x0) {
          FUN_00d8c7d0();
        }
        puVar7 = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (((char)uVar8 == '\0') && (local_38 != (undefined8 *)0x0)) {
          FUN_00d50b00();
        }
        goto LAB_018ba857;
      }
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar7 = (undefined8 *)0x0;
LAB_018ba857:
  *unaff_RDI = puVar7;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (lVar11 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


