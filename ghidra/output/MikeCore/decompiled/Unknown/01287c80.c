// Function: FUN_01287c80
// Address: 01287c80
// Size: 1766 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x012882b3) */
/* WARNING: Removing unreachable block (ram,0x012882bf) */
/* WARNING: Removing unreachable block (ram,0x01287d6c) */
/* WARNING: Removing unreachable block (ram,0x01287d78) */
/* WARNING: Removing unreachable block (ram,0x0128836d) */
/* WARNING: Removing unreachable block (ram,0x01288379) */
/* WARNING: Removing unreachable block (ram,0x012882cd) */
/* WARNING: Removing unreachable block (ram,0x012882d9) */

void FUN_01287c80(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  undefined8 unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar11;
  uint uVar12;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_00243390();
  lVar5 = local_80;
  lVar3 = *unaff_RDI;
  if (lVar3 == local_80) {
    if (((char)unaff_RDI[1] != '\0') || (local_80 == 0)) goto LAB_01287d4f;
    if (local_78 == '\0') {
      FUN_00d50b00();
      goto LAB_01287d47;
    }
LAB_01287d09:
    *(undefined1 *)(unaff_RDI + 1) = 1;
    local_78 = '\0';
  }
  else {
    lVar1 = unaff_RDI[1];
    if (local_78 != '\0') {
      *unaff_RDI = local_80;
      if (((char)lVar1 != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01287d09;
    }
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar5;
    if (((char)lVar1 != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01287d47:
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01287d4f:
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar3 = *unaff_RDI;
  uVar12 = *(uint *)(lVar3 + 0xc);
  uVar11 = (ulonglong)uVar12;
  if (0 < (int)uVar12) {
    do {
      uVar12 = uVar12 - 1;
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)uVar12 * 8);
      uVar8 = uVar12;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(uVar8);
      if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        if (*(longlong *)(lVar3 + 200) == 0) goto LAB_01287dec;
LAB_01287e2f:
        FUN_00d50b00();
        FUN_00d50b20();
      }
      else {
        if (*(longlong *)
             (*(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 200) !=
            0) goto LAB_01287e2f;
LAB_01287dec:
        local_78 = '\0';
        local_80 = lVar3;
        FUN_00d23f50();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((longlong)uVar11 < 2) break;
      uVar11 = uVar11 - 1;
      lVar3 = *unaff_RDI;
    } while( true );
  }
  FUN_01271180();
  lVar3 = local_80;
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_01288347;
    FUN_00d50b00();
  }
  else if (local_80 == 0) goto LAB_01288347;
  local_78 = '\0';
  local_80 = 0;
  local_70 = lVar3;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)(lVar3 + 0xc)) {
    lVar5 = 0;
    do {
      local_80 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar5 * 8);
      FUN_00d23340();
      lVar1 = local_40;
      local_50 = CONCAT71(local_50._1_7_,local_38[0]);
      plVar10 = &local_50;
      plVar6 = (longlong *)local_38;
      if (local_38[0] == '\0') {
        plVar6 = plVar10;
      }
      *(char *)plVar6 = '\0';
      if ((local_38[0] != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
      pVar9 = (pthread_key_t)plVar10;
      if (((char)local_50 == '\0') && (lVar1 != 0)) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        lVar7 = *(longlong *)(lVar1 + 0xa0);
      }
      else {
        lVar7 = *(longlong *)
                 (*(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0xa0
                 );
      }
      if (lVar7 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        pvVar4 = _pthread_getspecific(pVar9);
        if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = *(longlong *)(lVar1 + 0xa0);
        }
        else {
          lVar7 = *(longlong *)
                   (*(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) +
                   0xa0);
        }
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff00();
        lVar2 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_40 = lVar2;
        local_38[0] = '\0';
        FUN_00d21140();
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
        if (*(longlong *)(lVar1 + 0x100) == 0) goto LAB_0128811e;
LAB_0128813f:
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
      }
      else {
        if (*(longlong *)
             (*(longlong *)(lVar1 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8) + 0x100)
            != 0) goto LAB_0128813f;
LAB_0128811e:
        local_48 = '\0';
        local_50 = 0;
      }
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      lVar7 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        pvVar4 = _pthread_getspecific(pVar9);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270af0();
        lVar7 = local_40;
        local_88 = 0;
        if ((local_38[0] == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        local_90 = lVar7;
        local_88 = '\x01';
        FUN_012a4a40(unaff_RSI,&local_90);
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar5 = lVar5 + 1;
      local_68 = CONCAT44(local_68._4_4_,(int)lVar5);
    } while ((int)lVar5 < *(int *)(lVar3 + 0xc));
  }
  FUN_01a02020();
  FUN_00d50b20();
LAB_01288347:
  FUN_0152eef0();
  return;
}


