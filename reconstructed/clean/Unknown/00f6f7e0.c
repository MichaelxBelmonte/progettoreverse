// Function: FUN_00f6f7e0
// Address: 00f6f7e0
// Size: 597 bytes
// Class: Unknown
// String references:
//   "crypto/asn1/tasn_dec.c"

uint64_t
FUN_00f6f7e0(int *param_1,void*param_2,byte *param_3,int64_t *param_4,char *param_5)

{
  int64_t lVar1;
  uint uVar2;
  int iVar3;
  int *arg1;
  int64_t *this_ptr;
  int iVar4;
  int *local_res8;
  int local_res10;
  int local_res18;
  char local_res20;
  int64_t in_stack_ffffffffffffffb8;
  int64_t local_40;
  int local_38;
  int local_34;
  
  lVar1 = *param_4;
  local_40 = lVar1;
  if (param_5 == (char *)0x0) {
    uVar2 = _ASN1_get_object((uchar **)&local_34,&local_38,local_res8,param_1,
                             (long)in_stack_ffffffffffffffb8);
    if ((char)uVar2 < '\0') {
      iVar3 = 0x66;
      iVar4 = 0x471;
    }
    else {
LAB_00f6f94c:
      if (local_res10 < 0) {
LAB_00f6f971:
        if ((uVar2 & 1) != 0) {
          in_stack_ffffffffffffffb8 = (int64_t)local_res8 + (lVar1 - local_40);
        }
        if (param_1 != (int *)0x0) {
          *(char *)param_1 = (char)(uVar2 & 1);
        }
        if (param_3 != (byte *)0x0) {
          *param_3 = (byte)uVar2 & 0x20;
        }
        if (this_ptr != (int64_t *)0x0) {
          *this_ptr = in_stack_ffffffffffffffb8;
        }
        if (param_2 != (void*)0x0) {
          *param_2 = (uint8_t)local_34;
        }
        if (arg1 != (int *)0x0) {
          *arg1 = local_38;
        }
        *param_4 = local_40;
        return 1;
      }
      if ((local_38 == local_res10) && (local_34 == local_res18)) {
        if (param_5 != (char *)0x0) {
          *param_5 = '\0';
        }
        goto LAB_00f6f971;
      }
      if (local_res20 != '\0') {
        return 0xffffffff;
      }
      if (param_5 != (char *)0x0) {
        *param_5 = '\0';
      }
      iVar3 = 0xa8;
      iVar4 = 0x47d;
    }
    _ERR_put_error(0x2008e8a,iVar3,iVar4,(char *)param_1,(int)in_stack_ffffffffffffffb8);
  }
  else {
    if (*param_5 == '\0') {
      uVar2 = _ASN1_get_object((uchar **)&local_34,&local_38,local_res8,param_1,
                               (long)in_stack_ffffffffffffffb8);
      *(uint *)(param_5 + 4) = uVar2;
      *(int64_t *)(param_5 + 8) = in_stack_ffffffffffffffb8;
      *(int *)(param_5 + 0x14) = local_34;
      *(int *)(param_5 + 0x10) = local_38;
      param_5[0x18] = '\0';
      param_5[0x19] = '\0';
      param_5[0x1a] = '\0';
      param_5[0x1b] = '\0';
      *param_5 = '\x01';
      if (((uVar2 & 0x81) != 0) || (in_stack_ffffffffffffffb8 <= (int64_t)local_res8))
      goto LAB_00f6f946;
      iVar3 = 0x9b;
      iVar4 = 0x469;
    }
    else {
      uVar2 = *(uint *)(param_5 + 4);
      in_stack_ffffffffffffffb8 = *(int64_t *)(param_5 + 8);
      local_34 = *(int *)(param_5 + 0x14);
      local_38 = *(int *)(param_5 + 0x10);
      local_40 = *(int *)(param_5 + 0x18) + lVar1;
LAB_00f6f946:
      if (-1 < (char)uVar2) goto LAB_00f6f94c;
      iVar3 = 0x66;
      iVar4 = 0x471;
    }
    _ERR_put_error(0x2008e8a,iVar3,iVar4,(char *)param_1,(int)in_stack_ffffffffffffffb8);
    *param_5 = '\0';
  }
  return 0;
}

