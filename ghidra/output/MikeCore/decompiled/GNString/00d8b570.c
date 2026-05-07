// Function: FUN_00d8b570
// Address: 00d8b570
// Size: 900 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00d8b570(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 unaff_R12;
  
  plVar1 = (longlong *)*unaff_RSI;
  plVar6 = (longlong *)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
  if (plVar1 == unaff_RDI) goto LAB_00d8b5bd;
  if (plVar1 != (longlong *)0x0) {
    puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x360))();
    if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
    }
    if (((char **)puVar5 == &DAT_026d5e40) &&
       ((plVar1 = (longlong *)*unaff_RSI, (*(byte *)((longlong)unaff_RDI + 0x24) & 2) == 0 ||
        ((*(byte *)((longlong)plVar1 + 0x24) & 2) == 0)))) {
      iVar3 = (int)unaff_RDI[4];
      if (iVar3 == -1) {
        if ((int)plVar1[4] != -1) goto LAB_00d8b72b;
        iVar3 = (**(code **)(*unaff_RDI + 0x68))();
        iVar4 = (**(code **)(*plVar1 + 0x68))();
        if (iVar3 != iVar4) goto LAB_00d8b5ba;
        if ((unaff_RDI[2] == 0) && (iVar3 = (int)unaff_RDI[4], iVar3 != -1)) {
          if (iVar3 < 0x18) {
            plVar6 = unaff_RDI + 5;
          }
          else {
            plVar6 = (longlong *)FUN_00e83010(iVar3 + 1);
            iVar3 = (int)unaff_RDI[4];
          }
          FUN_00da41a0(iVar3,0);
          *(undefined1 *)((longlong)plVar6 + (longlong)(int)unaff_RDI[4]) = 0;
          cVar2 = FUN_00e31450(3,plVar6);
          if ((cVar2 == '\0') && (plVar6 != unaff_RDI + 5)) {
            FUN_00e83070();
          }
        }
        if (plVar1[2] == 0) {
          iVar3 = (int)plVar1[4];
          goto joined_r0x00d8b6ad;
        }
LAB_00d8b747:
        plVar6 = plVar1 + 2;
        iVar3 = FUN_00e7ddf0();
      }
      else {
        if ((int)plVar1[4] == -1) {
          if (unaff_RDI[2] == 0) {
            if (iVar3 < 0x18) {
              plVar6 = unaff_RDI + 5;
            }
            else {
              plVar6 = (longlong *)FUN_00e83010(iVar3 + 1);
              iVar3 = (int)unaff_RDI[4];
            }
            FUN_00da41a0(iVar3,0);
            *(undefined1 *)((longlong)plVar6 + (longlong)(int)unaff_RDI[4]) = 0;
            cVar2 = FUN_00e31450(3,plVar6);
            if ((cVar2 == '\0') && (plVar6 != unaff_RDI + 5)) {
              FUN_00e83070();
            }
          }
LAB_00d8b72b:
          if (plVar1[2] == 0) {
            iVar3 = (int)plVar1[4];
joined_r0x00d8b6ad:
            if (iVar3 != -1) {
              if (iVar3 < 0x18) {
                plVar6 = plVar1 + 5;
              }
              else {
                plVar6 = (longlong *)FUN_00e83010(iVar3 + 1);
                iVar3 = (int)plVar1[4];
              }
              FUN_00da41a0(iVar3,0);
              *(undefined1 *)((longlong)plVar6 + (longlong)(int)plVar1[4]) = 0;
              cVar2 = FUN_00e31450(3,plVar6);
              if ((cVar2 == '\0') && (plVar6 != plVar1 + 5)) {
                FUN_00e83070();
              }
            }
          }
          goto LAB_00d8b747;
        }
        if (iVar3 != (int)plVar1[4]) goto LAB_00d8b5ba;
        iVar3 = (**(code **)(*unaff_RDI + 0x68))();
        iVar4 = (**(code **)(*plVar1 + 0x68))();
        if (iVar3 != iVar4) goto LAB_00d8b5ba;
        if (*(uint *)(unaff_RDI + 4) < 2) goto LAB_00d8b5bd;
        iVar3 = FUN_00e7de10();
      }
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)plVar6 >> 8),iVar3 == 0);
      goto LAB_00d8b5bd;
    }
  }
LAB_00d8b5ba:
  plVar6 = (longlong *)0x0;
LAB_00d8b5bd:
  return (ulonglong)plVar6 & 0xffffffff;
}


