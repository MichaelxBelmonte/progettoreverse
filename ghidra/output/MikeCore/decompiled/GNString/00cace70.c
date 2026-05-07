// Function: FUN_00cace70
// Address: 00cace70
// Size: 1298 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00cad23e) */
/* WARNING: Removing unreachable block (ram,0x00cad24e) */
/* WARNING: Removing unreachable block (ram,0x00cad269) */
/* WARNING: Removing unreachable block (ram,0x00cad272) */
/* WARNING: Removing unreachable block (ram,0x00cad1eb) */
/* WARNING: Removing unreachable block (ram,0x00cad1f4) */
/* WARNING: Removing unreachable block (ram,0x00cad2d9) */
/* WARNING: Removing unreachable block (ram,0x00cad2e2) */

undefined8 FUN_00cace70(longlong *param_1,longlong *param_2,undefined1 *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar6;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  *param_3 = 0;
  uVar3 = FUN_00e17c00();
  uVar3 = (uVar3 & 0x3c) - 4 >> 2;
  switch(uVar3) {
  case 0:
    uVar1 = *(uint *)(unaff_RDI + 0xc);
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (((*(longlong *)(unaff_RDI + 0x10 + uVar6 * 8) == *unaff_RSI) &&
            (lVar5 = *(longlong *)(unaff_RDI + 0x88 + uVar6 * 8),
            *(longlong *)(lVar5 + 0x18) == *param_2)) && (*(longlong *)(lVar5 + 0x20) == *param_1))
        {
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
      break;
    }
    goto LAB_00cad02f;
  case 1:
    uVar1 = *(uint *)(unaff_RDI + 0xc);
    if ((int)uVar1 < 1) goto LAB_00cad02f;
    uVar6 = 0;
    do {
      if ((*(longlong *)(unaff_RDI + 0x10 + uVar6 * 8) == *unaff_RSI) &&
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x88 + uVar6 * 8) + 0x20) == *param_1)) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    break;
  default:
    uVar1 = *(uint *)(unaff_RDI + 0xc);
    break;
  case 3:
    uVar1 = *(uint *)(unaff_RDI + 0xc);
    if ((int)uVar1 < 1) goto LAB_00cad02f;
    uVar6 = 0;
    do {
      if ((*(longlong *)(unaff_RDI + 0x10 + uVar6 * 8) == *unaff_RSI) &&
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x88 + uVar6 * 8) + 0x18) == *param_2)) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
    break;
  case 7:
    uVar1 = *(uint *)(unaff_RDI + 0xc);
    if ((int)uVar1 < 1) goto LAB_00cad02f;
    uVar6 = 0;
    do {
      if (*(longlong *)(unaff_RDI + 0x10 + uVar6 * 8) == *unaff_RSI) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar6);
  }
  if (uVar1 == 0xf) {
    lVar5 = 0;
    do {
      FUN_00d50b20();
      *(undefined8 *)(unaff_RDI + 0x10 + lVar5 * 8) = 0;
      if (*(longlong *)(unaff_RDI + 0x88 + lVar5 * 8) != 0) {
        FUN_00d50b20();
        *(undefined8 *)(unaff_RDI + 0x88 + lVar5 * 8) = 0;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(unaff_RDI + 0xc));
    *(undefined4 *)(unaff_RDI + 0xc) = 0;
    *param_3 = 1;
    return 0xfffffff2;
  }
LAB_00cad02f:
  local_50 = 0;
  bVar2 = false;
  lVar5 = local_50;
  switch(uVar3) {
  case 0:
    local_d0 = *param_2;
    local_c8 = '\0';
    local_c0 = *param_1;
    local_b8 = '\0';
    FUN_00e32730(&local_c0,&local_d0);
    if (local_40 == 0) {
      local_40 = 0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = local_40;
    if ((local_c8 != '\0') && (lVar5 = local_40, local_d0 != 0)) {
      FUN_00d50b20();
      lVar5 = local_40;
    }
    break;
  case 1:
    local_b0 = *unaff_RSI;
    local_a8 = '\0';
    local_a0 = 0;
    local_98 = '\0';
    local_90 = *param_1;
    local_88 = '\0';
    FUN_00e32730(&local_90,&local_a0);
    if (local_40 == 0) {
      local_40 = 0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = local_40;
    if ((local_a8 != '\0') && (lVar5 = local_40, local_b0 != 0)) {
      local_50 = local_40;
      FUN_00d50b20();
      lVar5 = local_50;
    }
    break;
  case 3:
    local_80 = *unaff_RSI;
    local_78 = '\0';
    local_70 = *param_2;
    local_68 = '\0';
    local_60 = 0;
    local_58 = '\0';
    FUN_00e32730(&local_60,&local_70);
    if (local_40 == 0) {
      local_40 = 0;
      bVar2 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      bVar2 = true;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = local_40;
    if ((local_78 != '\0') && (lVar5 = local_40, local_80 != 0)) {
      local_50 = local_40;
      FUN_00d50b20();
      lVar5 = local_50;
    }
    break;
  case 7:
    FUN_00d50b00();
    iVar4 = *(int *)(unaff_RDI + 0xc);
    *(longlong *)(unaff_RDI + 0x10 + (longlong)iVar4 * 8) = *unaff_RSI;
    goto LAB_00cad371;
  }
  local_50 = lVar5;
  lVar5 = local_50;
  FUN_00d50b00();
  *(longlong *)(unaff_RDI + 0x10 + (longlong)*(int *)(unaff_RDI + 0xc) * 8) = *unaff_RSI;
  FUN_00d50b00();
  iVar4 = *(int *)(unaff_RDI + 0xc);
  *(longlong *)(unaff_RDI + 0x88 + (longlong)iVar4 * 8) = lVar5;
  if ((bVar2) && (lVar5 != 0)) {
    FUN_00d50b20();
    iVar4 = *(int *)(unaff_RDI + 0xc);
  }
LAB_00cad371:
  *(int *)(unaff_RDI + 0xc) = iVar4 + 1;
  return 1;
}


