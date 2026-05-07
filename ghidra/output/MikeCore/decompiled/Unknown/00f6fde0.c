// Function: FUN_00f6fde0
// Address: 00f6fde0
// Size: 1395 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_dec.c"


undefined8 FUN_00f6fde0(uint param_1,int *param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint in_EAX;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  BUF_MEM *pBVar5;
  long *plVar6;
  BUF_MEM *str;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  size_t sVar7;
  int reason;
  int *unaff_R12;
  byte bVar8;
  BUF_MEM *pBVar9;
  int *piVar10;
  uint local_70;
  int *in_stack_ffffffffffffff98;
  long local_60;
  undefined1 local_5c [16];
  uint local_4c;
  BUF_MEM *local_48;
  BUF_MEM *local_40;
  byte local_31;
  
  str = (BUF_MEM *)*unaff_RSI;
  if ((unaff_RDI == 0) && (in_EAX = param_1 & 0xffffff01, (param_1 & 1) == 0)) {
    *unaff_RSI = (longlong)((longlong)&str->length + (longlong)param_2);
    return 1;
  }
  local_4c = param_1;
  local_48 = str;
  if (0 < (longlong)param_2) {
    if (param_3 < 5) {
      local_70 = in_EAX;
      if (unaff_RDI == 0) {
        in_stack_ffffffffffffff98 = (int *)(ulonglong)in_EAX;
        piVar10 = param_2;
        do {
          if (((piVar10 != (int *)((longlong)&MACH_HEADER.magic + 1)) && ((char)str->length == '\0')
              ) && (*(char *)((longlong)&str->length + 1) == '\0')) goto LAB_00f70375;
          local_40 = str;
          uVar2 = _ASN1_get_object((uchar **)local_5c,&local_60,piVar10,param_4,
                                   (long)in_stack_ffffffffffffff98);
          bVar8 = (byte)uVar2;
          if ((char)bVar8 < '\0') {
            _ERR_put_error(0x2008e8a,0x66,0x471,(char *)param_4,(long)in_stack_ffffffffffffff98);
            pBVar9 = str;
            bVar1 = local_31;
          }
          else {
            in_stack_ffffffffffffff98 = (int *)((ulonglong)uVar2 & 0xffffffff00000001);
            param_2 = (int *)local_5c._4_8_;
            if ((uVar2 & 1) != 0) {
              param_2 = (int *)((undefined1 *)((longlong)piVar10 + (longlong)str) +
                               -(longlong)local_40);
            }
            local_48 = local_40;
            pBVar9 = local_40;
            bVar1 = bVar8 & 0x20;
          }
          if ((char)bVar8 < '\0') goto LAB_00f70325;
          local_31 = bVar1;
          if (bVar1 == 0) {
            if (param_2 != (int *)0x0) {
              local_48 = (BUF_MEM *)((longlong)&pBVar9->length + (longlong)param_2);
              pBVar9 = local_48;
            }
          }
          else {
            iVar4 = FUN_00f6fde0((int)(char)in_stack_ffffffffffffff98,param_2,param_3 + 1);
            pBVar9 = local_48;
            if (iVar4 == 0) {
              return 0;
            }
          }
          piVar10 = (int *)((undefined1 *)((longlong)piVar10 + (longlong)str) + -(longlong)pBVar9);
          str = pBVar9;
        } while (0 < (longlong)piVar10);
      }
      else {
        do {
          if (((param_2 != (int *)((longlong)&MACH_HEADER.magic + 1)) && ((char)str->length == '\0')
              ) && (*(char *)((longlong)&str->length + 1) == '\0')) goto LAB_00f70375;
          plVar6 = &local_60;
          piVar10 = param_2;
          local_40 = str;
          uVar2 = _ASN1_get_object((uchar **)local_5c,plVar6,param_2,param_4,
                                   (long)in_stack_ffffffffffffff98);
          sVar7 = (size_t)piVar10;
          iVar4 = (int)plVar6;
          bVar8 = (byte)uVar2;
          if ((char)bVar8 < '\0') {
            iVar4 = 0x66;
            sVar7 = 0x471;
            _ERR_put_error(0x2008e8a,0x66,0x471,(char *)param_4,(long)in_stack_ffffffffffffff98);
            pBVar9 = str;
          }
          else {
            local_70 = uVar2 & 1;
            in_stack_ffffffffffffff98 = (int *)local_5c._4_8_;
            if (local_70 != 0) {
              in_stack_ffffffffffffff98 =
                   (int *)(((longlong)param_2 + (longlong)str) - (longlong)local_40);
            }
            local_31 = bVar8 & 0x20;
            local_48 = local_40;
            pBVar9 = local_40;
          }
          if ((char)bVar8 < '\0') goto LAB_00f70325;
          if (local_31 == 0) {
            if (in_stack_ffffffffffffff98 != (int *)0x0) {
              pBVar5 = str;
              iVar4 = _BUF_MEM_grow_clean(str,iVar4);
              if (CONCAT44(extraout_var_00,iVar4) == 0) goto LAB_00f7002f;
              _memcpy(pBVar5,in_stack_ffffffffffffff98,sVar7);
              local_48 = (BUF_MEM *)
                         ((longlong)&pBVar9->length + (longlong)in_stack_ffffffffffffff98);
              pBVar9 = local_48;
            }
          }
          else {
            iVar4 = FUN_00f6fde0((int)(char)local_70,in_stack_ffffffffffffff98,param_3 + 1);
            pBVar9 = local_48;
            if (iVar4 == 0) {
              return 0;
            }
          }
          param_2 = (int *)(((longlong)param_2 + (longlong)str) - (longlong)pBVar9);
          str = pBVar9;
        } while (0 < (longlong)param_2);
      }
    }
    else {
      iVar4 = (int)in_stack_ffffffffffffff98;
      if (unaff_RDI == 0) {
        do {
          if (((param_2 != (int *)((longlong)&MACH_HEADER.magic + 1)) && ((char)str->length == '\0')
              ) && (*(char *)((longlong)&str->length + 1) == '\0')) goto LAB_00f70375;
          local_40 = str;
          uVar2 = _ASN1_get_object((uchar **)local_5c,&local_60,param_2,param_4,iVar4);
          bVar8 = (byte)uVar2;
          if ((char)bVar8 < '\0') {
            _ERR_put_error(0x2008e8a,0x66,0x471,(char *)param_4,iVar4);
            bVar1 = 0;
            pBVar9 = str;
          }
          else {
            unaff_R12 = (int *)local_5c._4_8_;
            if ((uVar2 & 1) != 0) {
              unaff_R12 = (int *)((undefined1 *)((longlong)param_2 + (longlong)str) +
                                 -(longlong)local_40);
            }
            bVar1 = bVar8 & 0x20;
            local_48 = local_40;
            pBVar9 = local_40;
          }
          if ((char)bVar8 < '\0') goto LAB_00f70325;
          if (bVar1 != 0) goto LAB_00f70343;
          if (unaff_R12 != (int *)0x0) {
            pBVar9 = (BUF_MEM *)((longlong)&pBVar9->length + (longlong)unaff_R12);
            local_48 = pBVar9;
          }
          param_2 = (int *)((undefined1 *)((longlong)param_2 + (longlong)str) + -(longlong)pBVar9);
          str = pBVar9;
        } while (0 < (longlong)param_2);
      }
      else {
        do {
          if (((param_2 != (int *)((longlong)&MACH_HEADER.magic + 1)) && ((char)str->length == '\0')
              ) && (*(char *)((longlong)&str->length + 1) == '\0')) goto LAB_00f70375;
          plVar6 = &local_60;
          piVar10 = param_2;
          local_40 = str;
          uVar2 = _ASN1_get_object((uchar **)local_5c,plVar6,param_2,param_4,iVar4);
          sVar7 = (size_t)piVar10;
          iVar3 = (int)plVar6;
          bVar8 = (byte)uVar2;
          if ((char)bVar8 < '\0') {
            iVar3 = 0x66;
            sVar7 = 0x471;
            _ERR_put_error(0x2008e8a,0x66,0x471,(char *)param_4,iVar4);
            bVar1 = 0;
            pBVar9 = str;
          }
          else {
            unaff_R12 = (int *)local_5c._4_8_;
            if ((uVar2 & 1) != 0) {
              unaff_R12 = (int *)(((longlong)param_2 + (longlong)str) - (longlong)local_40);
            }
            bVar1 = bVar8 & 0x20;
            local_48 = local_40;
            pBVar9 = local_40;
          }
          if ((char)bVar8 < '\0') goto LAB_00f70325;
          if (bVar1 != 0) goto LAB_00f70343;
          if (unaff_R12 != (int *)0x0) {
            pBVar5 = str;
            iVar3 = _BUF_MEM_grow_clean(str,iVar3);
            if (CONCAT44(extraout_var,iVar3) == 0) goto LAB_00f7002f;
            _memcpy(pBVar5,unaff_R12,sVar7);
            pBVar9 = (BUF_MEM *)((longlong)&pBVar9->length + (longlong)unaff_R12);
            local_48 = pBVar9;
          }
          param_2 = (int *)(((longlong)param_2 + (longlong)str) - (longlong)pBVar9);
          str = pBVar9;
        } while (0 < (longlong)param_2);
      }
    }
  }
  iVar4 = (int)in_stack_ffffffffffffff98;
  if ((local_4c & 1) == 0) goto LAB_00f7005d;
  iVar3 = 0x89;
  reason = 0x41d;
LAB_00f7035f:
  _ERR_put_error(0x2008e8a,iVar3,reason,(char *)param_4,iVar4);
  return 0;
LAB_00f7002f:
  iVar4 = (int)in_stack_ffffffffffffff98;
  iVar3 = 0x41;
  reason = 0x42a;
  goto LAB_00f7035f;
LAB_00f70375:
  iVar4 = (int)in_stack_ffffffffffffff98;
  if ((local_4c & 1) != 0) {
    str = (BUF_MEM *)((longlong)&str->length + 2);
LAB_00f7005d:
    *unaff_RSI = (longlong)str;
    return 1;
  }
  iVar3 = 0x9f;
  reason = 0x403;
  goto LAB_00f7035f;
LAB_00f70325:
  iVar4 = (int)in_stack_ffffffffffffff98;
  iVar3 = 0x3a;
  reason = 0x40c;
  goto LAB_00f7035f;
LAB_00f70343:
  iVar3 = 0xc5;
  reason = 0x413;
  goto LAB_00f7035f;
}


