// Function: FUN_00db9d10
// Address: 00db9d10
// Size: 1334 bytes
// Class: GNURL
// String references:
//   "GNURL::initWithStringValue: failed with string value:%@"


/* WARNING: Removing unreachable block (ram,0x00db9ff0) */
/* WARNING: Removing unreachable block (ram,0x00db9ffc) */
/* WARNING: Removing unreachable block (ram,0x00dba22f) */
/* WARNING: Removing unreachable block (ram,0x00dba23c) */

void FUN_00db9d10(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  sVar4 = FUN_00d8cbc0();
  lVar2 = DAT_027837c0;
  if (sVar4 == 0x2f) {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_025795a8;
    (*DAT_025795c0)();
    puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
    if (puVar1 == puVar6) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 0x10) = puVar6;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    sVar4 = FUN_00d8cbc0();
    lVar2 = DAT_027837b8;
    if (sVar4 == 0x2f) {
      if (DAT_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027d3890;
      if (DAT_027d3890 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027837b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027837c0;
      if (DAT_027837c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027837c8;
      if (DAT_027837c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d8dbf0();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
  }
  else {
    if (DAT_027837c0 != 0) {
      FUN_00d50b00();
    }
    iVar5 = FUN_00d90650();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (iVar5 == -1) {
      iVar5 = FUN_00d8c7a0();
      if (2 < iVar5) {
        FUN_00d8e3d0();
        lVar2 = DAT_027837d0;
        if (DAT_027837d0 != 0) {
          FUN_00d50b00();
        }
        iVar5 = FUN_00d92590();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 0) {
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_025795a8;
          (*DAT_025795c0)();
          puVar1 = *(undefined8 **)(unaff_RDI + 0x10);
          if (puVar1 == puVar6) {
            FUN_00d50b20();
          }
          else {
            *(undefined8 **)(unaff_RDI + 0x10) = puVar6;
            if (puVar1 != (undefined8 *)0x0) {
              FUN_00d50b20();
            }
          }
          lVar2 = DAT_027837d8;
          if (DAT_027837d8 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar2 = DAT_027837c0;
          if (DAT_027837c0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          FUN_00d8dbf0();
          return;
        }
      }
      lVar2 = DAT_027837e0;
      if (DAT_027837e0 != 0) {
        FUN_00d50b00();
      }
      lVar3 = *unaff_RSI;
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = *unaff_RSI;
      lVar3 = *(longlong *)(unaff_RDI + 0x10);
      if (lVar3 != lVar2) {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        *(longlong *)(unaff_RDI + 0x10) = lVar2;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


