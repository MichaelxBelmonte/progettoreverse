// Function: FUN_00e93080
// Address: 00e93080
// Size: 1192 bytes
// Class: GNString
// String references:
//   "com.celemony.gnhttprequest.httpStatus.%I"
//   "http status code: %I"


/* WARNING: Removing unreachable block (ram,0x00e9349b) */
/* WARNING: Removing unreachable block (ram,0x00e931e3) */
/* WARNING: Removing unreachable block (ram,0x00e931ec) */
/* WARNING: Removing unreachable block (ram,0x00e93289) */
/* WARNING: Removing unreachable block (ram,0x00e93292) */
/* WARNING: Removing unreachable block (ram,0x00e93445) */
/* WARNING: Removing unreachable block (ram,0x00e9344e) */
/* WARNING: Removing unreachable block (ram,0x00e93364) */
/* WARNING: Removing unreachable block (ram,0x00e9336d) */
/* WARNING: Removing unreachable block (ram,0x00e93305) */
/* WARNING: Removing unreachable block (ram,0x00e9330e) */
/* WARNING: Removing unreachable block (ram,0x00e9350a) */
/* WARNING: Removing unreachable block (ram,0x00e93517) */
/* WARNING: Removing unreachable block (ram,0x00e932aa) */
/* WARNING: Removing unreachable block (ram,0x00e932b3) */

ulonglong FUN_00e93080(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar5;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    FUN_00e97840();
    lVar4 = *unaff_RSI;
    if (lVar4 == local_40) {
      if (((char)unaff_RSI[1] != '\0') || (local_40 == 0)) goto LAB_00e9315b;
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_00e93151;
      }
LAB_00e93116:
      local_48 = unaff_RSI + 1;
      *(undefined1 *)local_48 = 1;
    }
    else {
      lVar3 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = local_40;
        if (((char)lVar3 != '\0') && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_00e93116;
      }
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *unaff_RSI = local_40;
      if (((char)lVar3 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_00e93151:
      local_48 = unaff_RSI + 1;
      *(undefined1 *)local_48 = 1;
LAB_00e9315b:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e97870();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      lVar4 = *param_2;
      FUN_00e97870();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_40 = local_58;
      local_38 = '\0';
      FUN_00d235a0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00e97f30();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
    if (local_40 != 0) {
      FUN_00e97f30();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      local_40 = local_58;
      local_38 = '\0';
      FUN_00d21140();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
  }
  iVar1 = *(int *)(unaff_RDI + 0x28);
  if ((iVar1 == 0) || (iVar1 == 200)) goto LAB_00e93476;
  FUN_00d05a80();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_00e93313;
    }
LAB_00e93374:
    bVar2 = true;
    local_48._0_1_ = '\0';
    local_60 = 0;
    if (2 < iVar1 - 0x1f6U) goto LAB_00e933e8;
LAB_00e933ac:
    lVar4 = DAT_02789560;
    if (DAT_02789560 != 0) {
      FUN_00d50b00();
      if (local_40 != lVar4) goto LAB_00e933db;
      FUN_00d50b20();
      lVar4 = local_40;
      goto LAB_00e933e8;
    }
    if (local_40 != 0) {
LAB_00e933db:
      if (!bVar2) {
        FUN_00d50b20();
      }
      goto LAB_00e933e8;
    }
LAB_00e934bb:
    FUN_00d8cb40();
    if (local_40 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = local_40;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else {
    if (local_40 == 0) goto LAB_00e93374;
LAB_00e93313:
    FUN_00d8cb40();
    local_60 = local_40;
    if (local_40 == 0) {
      local_48._0_1_ = '\0';
    }
    else {
      local_48._0_1_ = '\x01';
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
    }
    bVar2 = false;
    if (iVar1 - 0x1f6U < 3) goto LAB_00e933ac;
LAB_00e933e8:
    if (lVar4 == 0) goto LAB_00e934bb;
  }
  if ((*unaff_RSI == 0) && (local_60 != 0)) {
    if (((char)local_48 != '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    *unaff_RSI = local_60;
    *(char *)(unaff_RSI + 1) = (char)local_48;
  }
  FUN_00d235a0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  if (((char)local_48 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
LAB_00e93476:
  return uVar5 & 0xffffffff;
}


