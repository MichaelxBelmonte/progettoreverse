// Function: FUN_0063f230
// Address: 0063f230
// Size: 816 bytes
// Class: MDURLOpenedController


longlong * FUN_0063f230(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  FUN_01e561b0();
  lVar6 = local_60;
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    FUN_00643590();
    lVar6 = local_60;
    if ((local_58[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e561b0();
    FUN_01d8b220();
    lVar1 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      local_58[0] = '\0';
      local_60 = 0;
      local_38 = lVar6;
      local_50 = lVar6;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar6 = local_38;
        lVar3 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        if (local_60 == lVar1) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_58[0] != '\0') {
            *unaff_RDI = lVar1;
            goto LAB_0063f4f0;
          }
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar1;
LAB_0063f529:
          *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0063f52e:
          FUN_0065ca40();
          if (lVar1 == 0) goto LAB_0063f544;
          goto LAB_0063f53c;
        }
        FUN_0021a630();
        lVar3 = CONCAT71(uStack_6f,local_70);
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = local_38;
        lVar7 = local_60;
        if (lVar3 == lVar1) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
LAB_0063f526:
            *unaff_RDI = lVar7;
            goto LAB_0063f529;
          }
LAB_0063f4ed:
          *unaff_RDI = local_60;
LAB_0063f4f0:
          *(undefined1 *)(unaff_RDI + 1) = 1;
          local_58[0] = '\0';
          lVar6 = local_38;
          goto LAB_0063f52e;
        }
        FUN_0021cc50();
        lVar3 = CONCAT71(uStack_6f,local_70);
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = local_38;
        lVar7 = local_60;
        if (lVar3 == lVar1) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            goto LAB_0063f526;
          }
          goto LAB_0063f4ed;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
      }
      FUN_0065ca40();
      lVar6 = local_38;
    }
    cVar2 = FUN_0063f180();
    if (cVar2 == '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      FUN_00d23310();
      lVar3 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_70 == '\0') && (lVar3 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    if (lVar1 != 0) {
LAB_0063f53c:
      FUN_00d50b20();
    }
LAB_0063f544:
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}


