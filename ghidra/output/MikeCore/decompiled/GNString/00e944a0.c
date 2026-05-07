// Function: FUN_00e944a0
// Address: 00e944a0
// Size: 940 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e945e0) */
/* WARNING: Removing unreachable block (ram,0x00e9467b) */
/* WARNING: Removing unreachable block (ram,0x00e94593) */

ulonglong FUN_00e944a0(undefined4 param_1,code *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong *plVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_3c = param_1;
  (**(code **)(*unaff_RDI + 0x3c8))();
  cVar5 = FUN_00e92370();
  if (cVar5 == '\0') {
    local_78 = unaff_RDI + 6;
    if (unaff_ESI < 1) goto LAB_00e946a1;
    plVar9 = (longlong *)0x0;
    uVar11 = 0;
    do {
      (**(code **)(*unaff_RDI + 0x3c0))();
      (**(code **)(*unaff_RDI + 0x388))();
      FUN_00d50b00();
      FUN_00d059e0();
      plVar4 = local_50;
      if (local_50 == plVar9) {
        plVar4 = plVar9;
        if (((char)uVar11 != '\0') || (local_50 == (longlong *)0x0)) goto joined_r0x00e94684;
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_00e945f0;
        }
LAB_00e94583:
        plVar9 = plVar4;
        local_48 = '\0';
        uVar11 = 1;
      }
      else {
        if (local_48 != '\0') {
          if (((char)uVar11 != '\0') && (plVar9 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e94583;
        }
        local_38 = uVar11;
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar11 = 1;
        if (((char)local_38 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar4;
LAB_00e945f0:
          uVar11 = 1;
          plVar4 = plVar9;
        }
joined_r0x00e94684:
        plVar9 = plVar4;
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar9 + 0x368))();
      (**(code **)(*plVar9 + 0x370))();
      iVar7 = FUN_00e31390();
      if ((iVar7 != 0) || (cVar5 = (**(code **)(*unaff_RDI + 0x3a0))(), cVar5 == '\0')) break;
      bVar6 = FUN_00d05ae0();
      bVar3 = 1 < unaff_ESI;
      unaff_ESI = unaff_ESI + -1;
    } while ((bVar6 & bVar3) != 0);
    if (param_2 != (code *)0x0) {
      FUN_00d05ae0();
      (*param_2)();
    }
    *(int *)(unaff_RDI + 0x14) = (int)plVar9[4];
    *(undefined4 *)((longlong)unaff_RDI + 0xa4) = *(undefined4 *)((longlong)plVar9 + 0x24);
    *(int *)(unaff_RDI + 0x15) = (int)plVar9[5];
    *(undefined4 *)((longlong)unaff_RDI + 0xac) = *(undefined4 *)((longlong)plVar9 + 0x2c);
    *(int *)(unaff_RDI + 0x16) = (int)plVar9[6];
    (**(code **)(*unaff_RDI + 0x388))();
    uVar10 = 0;
    lVar1 = unaff_RDI[7];
  }
  else {
    local_78 = unaff_RDI + 6;
    FUN_00e313d0();
LAB_00e946a1:
    uVar10 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    uVar11 = 0;
    lVar1 = unaff_RDI[7];
  }
  cVar5 = (char)uVar10;
  if ((lVar1 != 0) && ((char)local_3c != '\0')) {
    local_3c = uVar10;
    FUN_00d403d0();
    lVar1 = DAT_02789578;
    if (DAT_02789578 != 0) {
      FUN_00d50b00();
    }
    local_58 = 0;
    lVar2 = unaff_RDI[7];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    local_60 = lVar2;
    FUN_00d40470(&local_88,&local_60,1,3);
    cVar5 = (char)local_3c;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x3d0))();
  if (*(char *)((longlong)unaff_RDI + 0x35) == '\0') {
    iVar7 = FUN_00e31390();
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar7 == 0);
    if ((char)uVar11 == '\0' || cVar5 != '\0') goto LAB_00e94847;
  }
  else {
    uVar8 = 0;
    if ((char)uVar11 == '\0' || cVar5 != '\0') goto LAB_00e94847;
  }
  FUN_00d50b20();
LAB_00e94847:
  return uVar8 & 0xffffffff;
}


