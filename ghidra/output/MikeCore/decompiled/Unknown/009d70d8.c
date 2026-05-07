// Function: FUN_009d70d8
// Address: 009d70d8
// Size: 561 bytes
// Class: Unknown


char FUN_009d70d8(void)

{
  longlong lVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_var;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *unaff_RSI;
  ulonglong uVar9;
  ulong in_R9D;
  char cVar10;
  undefined1 uVar11;
  bool bVar12;
  byte local_80;
  char *local_78;
  byte local_68 [8];
  char *local_60;
  ulonglong local_58;
  byte local_50 [8];
  char *local_48;
  ulonglong local_40;
  undefined2 local_36;
  undefined2 local_34;
  char local_32 [2];
  
  pcVar6 = local_32 + 1;
  local_32[0] = 'a';
  local_32[1] = '\0';
  FUN_009d76b8(pcVar6,local_32);
  sVar2 = _strlen(pcVar6);
  pcVar6 = local_48;
  if ((local_50[0] & 1) == 0) {
    pcVar6 = (char *)(ulonglong)(local_50[0] >> 1);
  }
  if ((char *)CONCAT44(extraout_var,sVar2) == pcVar6) {
    pcVar6 = local_32;
    iVar3 = std::string::compare
                      ((ulong)pcVar6,0xffffffff,(char *)CONCAT44(extraout_var,sVar2),in_R9D);
    if (iVar3 == 0) {
      *unaff_RSI = 0;
      cVar10 = '\0';
      goto LAB_009d72cf;
    }
  }
  local_36 = 0x41;
  FUN_009d76b8((longlong)&local_36 + 1,&local_36);
  pcVar6 = (char *)((longlong)&local_34 + 1);
  local_34 = 0x3b;
  FUN_009d76b8(pcVar6,&local_34);
  uVar4 = (uint)local_48;
  if (((int)uVar4 < 0) && ((local_50[0] & 1) != 0)) {
LAB_009d72a5:
    uVar11 = 0;
    cVar10 = '\x03';
  }
  else {
    if ((local_68[0] & 1) == 0) {
      uVar7 = (uint)(local_68[0] >> 1);
      local_58 = (ulonglong)local_68 | 1;
    }
    else {
      uVar7 = (uint)local_60;
    }
    bVar12 = (local_50[0] & 1) == 0;
    if (bVar12) {
      uVar4 = (uint)(local_50[0] >> 1);
    }
    uVar9 = local_40;
    if (bVar12) {
      uVar9 = (ulonglong)local_50 | 1;
    }
    lVar8 = 0;
    do {
      if (((int)uVar7 < lVar8) ||
         (pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),*(char *)(uVar9 + lVar8)),
         *(char *)(uVar9 + lVar8) != *(char *)(local_58 + lVar8))) {
        iVar3 = (int)lVar8;
        if (iVar3 != 0) goto LAB_009d7205;
        goto LAB_009d72a5;
      }
      lVar1 = lVar8 + 1;
      bVar12 = lVar8 < (int)uVar4;
      lVar8 = lVar1;
    } while (bVar12);
    iVar3 = (int)lVar1;
LAB_009d7205:
    uVar9 = (ulonglong)local_50 | 1;
    if ((local_50[0] & 1) != 0) {
      uVar9 = local_40;
    }
    if (iVar3 + -1 == 0) {
LAB_009d7263:
      pcVar6 = (char *)CONCAT71((int7)((ulonglong)pcVar6 >> 8),1);
      if ((local_50[0] & 1) == 0) {
        local_48 = (char *)(ulonglong)(local_50[0] >> 1);
      }
      if ((local_68[0] & 1) == 0) {
        local_60 = (char *)(ulonglong)(local_68[0] >> 1);
      }
      if (local_48 != local_60) goto LAB_009d72a5;
      if ((local_80 & 1) == 0) {
        local_78 = (char *)(ulonglong)(local_80 >> 1);
      }
      uVar11 = 0;
      if (local_48 == local_78) {
        uVar11 = (undefined1)lVar8;
      }
      cVar10 = (local_48 != local_78) * '\x02' + '\x01';
      pcVar6 = local_78;
    }
    else {
      uVar11 = *(undefined1 *)(uVar9 + (longlong)(iVar3 + -1));
      iVar3 = FUN_009d78a6();
      iVar5 = FUN_009d78a6();
      if (iVar3 != iVar5) goto LAB_009d7263;
      iVar3 = FUN_009d78a6();
      iVar5 = FUN_009d78a6();
      cVar10 = '\x02';
      if (iVar3 != iVar5) goto LAB_009d7263;
    }
  }
  *unaff_RSI = uVar11;
  if ((local_80 & 1) != 0) {
    operator_delete(pcVar6);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(pcVar6);
  }
LAB_009d72cf:
  if ((local_50[0] & 1) != 0) {
    operator_delete(pcVar6);
  }
  return cVar10;
}


