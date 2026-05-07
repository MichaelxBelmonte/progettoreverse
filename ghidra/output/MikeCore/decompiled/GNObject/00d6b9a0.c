// Function: FUN_00d6b9a0
// Address: 00d6b9a0
// Size: 980 bytes
// Class: GNObject


longlong * FUN_00d6b9a0(void)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  short sVar8;
  bool bVar9;
  longlong local_60;
  undefined1 local_58;
  longlong *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  undefined4 local_38;
  short local_32;
  
LAB_00d6b9bf:
  FUN_00c8e710();
  lVar3 = CONCAT71(uStack_47,local_48);
  if ((((local_40 == '\0') && (lVar3 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  do {
    *(undefined8 *)(unaff_RSI + 0x30) = *(undefined8 *)(unaff_RSI + 0x28);
    cVar5 = FUN_00d6b3f0();
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    *(undefined4 *)(unaff_RSI + 0x40) = 0;
  } while (local_32 != 0x3c);
  iVar1 = *(int *)(lVar3 + 0x18);
  local_50 = unaff_RDI;
  FUN_00c8e340();
  *(undefined2 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1) = 0x3c;
  do {
    cVar5 = FUN_00d6b3f0();
    unaff_RDI = local_50;
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    if (local_32 == 0x22) {
      sVar8 = 0x22;
      if (*(int *)(unaff_RSI + 0x40) == 1) {
        *(undefined4 *)(unaff_RSI + 0x40) = 0;
LAB_00d6bc24:
        local_38 = 1;
      }
      else {
        if (*(int *)(unaff_RSI + 0x40) == 0) {
          *(undefined4 *)(unaff_RSI + 0x40) = 1;
        }
LAB_00d6bafb:
        local_38 = 0;
      }
    }
    else if (local_32 == 0x27) {
      iVar1 = *(int *)(unaff_RSI + 0x40);
      if (iVar1 != 2) {
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_RSI + 0x40) = 2;
          sVar8 = 0x27;
          goto LAB_00d6bafb;
        }
        goto LAB_00d6baf3;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 0;
      local_38 = 1;
      sVar8 = 0x27;
    }
    else {
      iVar1 = *(int *)(unaff_RSI + 0x40);
LAB_00d6baf3:
      sVar8 = local_32;
      if (iVar1 != 0) goto LAB_00d6bafb;
      if (((local_32 != 9) && (local_32 != 10)) && (local_32 != 0xd)) goto LAB_00d6bc24;
      local_38 = 1;
      local_32 = 0x20;
      sVar8 = 0x20;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340();
    psVar2 = *(short **)(lVar3 + 0x10);
    *(short *)((longlong)psVar2 + (longlong)iVar1) = sVar8;
    iVar1 = *(int *)(lVar3 + 0x18);
    unaff_RDI = local_50;
    if (iVar1 < 8) {
      if (3 < iVar1) goto LAB_00d6bb60;
    }
    else {
      if (((psVar2[1] == 0x21) && (psVar2[2] == 0x2d)) && (psVar2[3] == 0x2d)) {
        FUN_00d6b840();
        if (CONCAT71(uStack_47,local_48) == 0) {
          *(undefined1 *)(local_50 + 1) = 0;
          *local_50 = 0;
          FUN_00d50b20();
          return local_50;
        }
        unaff_RDI = local_50;
        if (local_40 != '\0') {
          FUN_00d50b20();
        }
        goto LAB_00d6bc65;
      }
LAB_00d6bb60:
      if (psVar2[1] == 0x3f) {
        local_58 = 0;
        local_60 = lVar3;
        FUN_00d6b700(0x3f,&local_60);
        goto LAB_00d6bd0a;
      }
      if (((((0x11 < iVar1) && (*psVar2 == 0x3c)) && (psVar2[1] == 0x21)) &&
          ((psVar2[2] == 0x5b && (psVar2[3] == 0x43)))) &&
         ((((psVar2[4] == 0x44 && ((psVar2[5] == 0x41 && (psVar2[6] == 0x54)))) &&
           (psVar2[7] == 0x41)) && (psVar2[8] == 0x5b)))) break;
    }
    if (sVar8 == 0x3e) {
      if ((char)local_38 == '\0') goto LAB_00d6bcfe;
      *(undefined8 *)(unaff_RSI + 0x38) = *(undefined8 *)(unaff_RSI + 0x28);
      FUN_00d920f0(*(undefined8 *)(unaff_RSI + 0x28),iVar1 / 2);
      *(undefined1 *)(local_50 + 1) = 0;
      lVar7 = CONCAT71(uStack_47,local_48);
      unaff_RDI = local_50;
      if (local_40 == '\0') {
        if (lVar7 != 0) {
          FUN_00d50b00();
          *local_50 = lVar7;
          *(undefined1 *)(local_50 + 1) = 1;
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d6bd0a;
        }
        lVar7 = 0;
      }
      *local_50 = lVar7;
      *(undefined1 *)(local_50 + 1) = 1;
      goto LAB_00d6bd0a;
    }
  } while( true );
  local_48 = '\0';
  cVar5 = '\0';
  do {
    cVar4 = local_48;
    cVar6 = FUN_00d6b5b0();
    unaff_RDI = local_50;
    if (cVar6 == '\0') {
LAB_00d6bcfe:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
LAB_00d6bd0a:
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
    bVar9 = cVar5 != ']';
    cVar5 = cVar4;
  } while (((bVar9) || (cVar4 != ']')) || (local_48 != '>'));
  if (lVar3 != 0) {
LAB_00d6bc65:
    FUN_00d50b20();
  }
  goto LAB_00d6b9bf;
}


