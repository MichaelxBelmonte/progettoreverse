// Function: FUN_00c82360
// Address: 00c82360
// Size: 1195 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c8255a) */
/* WARNING: Removing unreachable block (ram,0x00c826b5) */
/* WARNING: Removing unreachable block (ram,0x00c826c1) */
/* WARNING: Removing unreachable block (ram,0x00c825e2) */
/* WARNING: Removing unreachable block (ram,0x00c825ee) */
/* WARNING: Removing unreachable block (ram,0x00c8242d) */
/* WARNING: Removing unreachable block (ram,0x00c82439) */
/* WARNING: Removing unreachable block (ram,0x00c827c7) */
/* WARNING: Removing unreachable block (ram,0x00c827d0) */
/* WARNING: Removing unreachable block (ram,0x00c826cf) */
/* WARNING: Removing unreachable block (ram,0x00c826db) */

void FUN_00c82360(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  longlong *local_58;
  char local_50 [8];
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  if (*unaff_RSI != 0) {
    FUN_00d8b910();
    lVar3 = FUN_00e87730();
    if ((lVar3 != 0) && (lVar3 = FUN_00e86210(), lVar3 != 0)) {
      FUN_00d50b00();
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
  if ((DAT_028a7200 == (undefined8 *)0x0) || (DAT_028a7209 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7200 != (undefined8 *)0x0) {
      DAT_028a7209 = '\x01';
      FUN_00e8cb70();
      goto LAB_00c823f4;
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_0258a670;
    (*DAT_0258a688)();
    bVar7 = DAT_028a7200 == (undefined8 *)0x0;
    DAT_028a7200 = puVar4;
    if (((bVar7) || (FUN_00d50b20(), DAT_028a7200 != (undefined8 *)0x0)) && (DAT_028a7208 == '\0'))
    {
      DAT_028a7208 = '\x01';
      FUN_00e8cb90();
    }
    DAT_028a7209 = '\x01';
    FUN_00e8cb70();
  }
  else {
LAB_00c823f4:
    FUN_00c82a50();
    if (local_50[0] == '\0') {
      if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
         (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50[0] = '\0';
    }
    if (local_58 != (longlong *)0x0) {
      if (local_58 == DAT_028a7210) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
      else {
        FUN_00d50b00();
        *unaff_RDI = (longlong)local_58;
        *(undefined1 *)(unaff_RDI + 1) = 1;
      }
      FUN_00d50b20();
      return;
    }
  }
  lVar3 = DAT_028a71f0;
  if (DAT_028a71f0 != 0) {
    FUN_00d50b00();
    local_50[0] = '\0';
    local_48 = lVar3;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar3 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)(local_48 + 0xc) <= iVar6) break;
      lVar3 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar3 * 8);
      lVar1 = *(longlong *)(lVar3 + 0xd0);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      cVar2 = FUN_00d23d70();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        FUN_00c82b00();
        plVar5 = unaff_RDI + 1;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = lVar3;
        if (local_50[0] != '\0') {
          *(undefined1 *)plVar5 = 1;
          plVar5 = (longlong *)local_50;
        }
        *(undefined1 *)plVar5 = 0;
        FUN_00e2c740();
        FUN_00d50b20();
        return;
      }
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
    }
    FUN_00e2c740();
    FUN_00d50b20();
  }
  if ((DAT_028a7210 == (longlong *)0x0) || (DAT_028a7219 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a7210 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_0002f270();
      (**(code **)(*plVar5 + 0x18))();
      bVar7 = DAT_028a7210 == (longlong *)0x0;
      DAT_028a7210 = plVar5;
      if (((bVar7) || (FUN_00d50b20(), DAT_028a7210 != (longlong *)0x0)) && (DAT_028a7218 == '\0'))
      {
        DAT_028a7218 = '\x01';
        FUN_00e8cb90();
      }
      DAT_028a7219 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a7219 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028a7210 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00c8279d;
    }
  }
  plVar5 = DAT_028a7210;
  FUN_00d50b00();
LAB_00c8279d:
  FUN_00c82b00();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


