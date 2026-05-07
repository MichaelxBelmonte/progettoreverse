// Function: FUN_00094580
// Address: 00094580
// Size: 1103 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x000946a2) */
/* WARNING: Removing unreachable block (ram,0x000946af) */

void FUN_00094580(void)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  longlong local_a0;
  char local_98;
  longlong local_80;
  char local_78;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  
  plVar2 = local_50;
  FUN_01e561b0();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    if ((*(longlong *)(unaff_RDI + 0x10) != 0) && (*unaff_RSI == *(longlong *)(unaff_RDI + 0x10))) {
      FUN_01e561b0();
      FUN_01d8f0f0();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        lVar1 = *(longlong *)(unaff_RDI + 0x18);
        if (lVar1 != 0) {
          local_48 = '\0';
          local_50 = (longlong *)0x0;
          uVar3 = 0;
          uVar4 = (ulonglong)*(uint *)(lVar1 + 0xc);
          if ((int)*(uint *)(lVar1 + 0xc) < 1) {
            uVar4 = uVar3;
          }
          while (uVar4 != uVar3) {
            local_50 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + uVar3 * 8);
            uVar3 = uVar3 + 1;
            if ((longlong *)local_50[2] == plVar2) {
              FUN_00097ba0();
              FUN_00d50b20();
              return;
            }
          }
          FUN_00097ba0();
        }
        FUN_00d50b20();
      }
    }
    (**(code **)(*(longlong *)*unaff_RSI + 0x5e8))();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    FUN_00093e10();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      if (*(longlong *)(unaff_RDI + 0x10) != 0) {
        FUN_01e561b0();
        if (local_50 == (longlong *)0x0) {
          bVar5 = false;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar5 = local_60 != 0;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          FUN_01e561b0();
          (**(code **)(*local_50 + 0x9b0))();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (*unaff_RSI != 0) {
        FUN_01e561b0();
        if (local_50 == (longlong *)0x0) {
          bVar5 = false;
        }
        else {
          FUN_01e561b0();
          FUN_01d8f0f0();
          bVar5 = local_60 != 0;
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar5) {
          FUN_01e561b0();
          (**(code **)(*local_50 + 0x9b0))();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *(longlong *)(unaff_RDI + 0x10) = *unaff_RSI;
      FUN_01e561b0();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      FUN_00d50b00();
      local_a0 = 0;
      local_98 = '\0';
      FUN_01e57a30(&local_a0,&stack0xffffffffffffff70);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}


