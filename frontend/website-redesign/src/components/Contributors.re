module Styles = {
  open Css;
  let container =
    style([
      padding2(~v=`rem(4.), ~h=`rem(1.25)),
      media(
        Theme.MediaQuery.desktop,
        [padding2(~v=`rem(8.), ~h=`rem(9.5))],
      ),
    ]);
  let header = merge([Theme.Type.h2, style([marginBottom(`rem(0.5))])]);
  let sectionSubhead =
    merge([
      Theme.Type.sectionSubhead,
      style([
        fontSize(`px(19)),
        lineHeight(`rem(1.75)),
        marginBottom(`rem(2.93)),
        letterSpacing(`pxFloat(-0.4)),
      ]),
    ]);
  let headerCopy =
    style([media(Theme.MediaQuery.desktop, [width(`rem(42.))])]);
  let genesisRule =
    style([media(Theme.MediaQuery.desktop, [width(`percent(100.))])]);
};

module TeamMember = {
  module Styles = {
    open Css;
    let memberContainer =
      style([height(`rem(17.)), width(`rem(11.)), color(orange)]);
    let image =
      style([
        width(`rem(10.)),
        marginBottom(`rem(1.)),
        media(Theme.MediaQuery.desktop, [width(`rem(11.))]),
      ]);
    let name =
      merge([
        Theme.Type.h5,
        style([
          lineHeight(`rem(1.37)),
          color(black),
          important(fontSize(`px(18))),
        ]),
      ]);
    let title =
      merge([
        Theme.Type.contributorLabel,
        style([
          lineHeight(`rem(1.37)),
          color(black),
          fontSize(`px(12)),
          maxWidth(`rem(10.)),
        ]),
      ]);
    let flexRow =
      style([
        display(`flex),
        flexDirection(`row),
        justifyContent(`spaceBetween),
        width(`rem(10.)),
      ]);
  };
  [@react.component]
  let make = (~fullName="", ~title="", ~src="") => {
    <div className=Styles.memberContainer>
      <img className=Styles.image src />
      <div className=Styles.flexRow>
        <h5 className=Styles.name> {React.string(fullName)} </h5>
        <Icon kind=Icon.Plus />
      </div>
      <p className=Styles.title> {React.string(title)} </p>
    </div>;
  };
};

module TeamGrid = {
  module Styles = {
    open Css;
    let grid =
      style([
        display(`grid),
        paddingTop(`rem(1.)),
        gridTemplateColumns([`rem(10.), `rem(10.)]),
        gridAutoRows(`rem(17.3)),
        gridColumnGap(`rem(1.)),
        gridRowGap(`rem(1.)),
        media(
          Theme.MediaQuery.tablet,
          [
            gridTemplateColumns([
              `rem(10.),
              `rem(10.),
              `rem(10.),
              `rem(10.),
            ]),
          ],
        ),
        media(
          Theme.MediaQuery.desktop,
          [
            gridTemplateColumns([
              `rem(11.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
            ]),
          ],
        ),
      ]);
  };
  [@react.component]
  let make = () => {
    <div className=Styles.grid>
      <TeamMember
        fullName="Evan Shapiro"
        title="CEO, O(1) Labs"
        src="/static/img/headshots/EvanShapiro.jpg"
      />
      <TeamMember
        fullName="Izaak Meckler"
        title="CTO, O(1) Labs"
        src="/static/img/headshots/IzaakMeckler.jpg"
      />
      <TeamMember
        fullName="Brandon Kase"
        title="Head of Product Engineering, O(1) Labs"
        src="/static/img/headshots/BrandonKase.jpg"
      />
      <TeamMember
        fullName="Claire Kart"
        title="Head of Marketing & Community, O(1) Labs"
        src="/static/img/headshots/ClaireKart.jpg"
      />
      <TeamMember
        fullName="Emre Tekisalp"
        title="Head of Business Development, O(1) Labs"
        src="/static/img/headshots/EmreTekisalp.jpg"
      />
      <TeamMember
        fullName="Bijan Shahrokhi"
        title="Product Manager, O(1) Labs"
        src="/static/img/headshots/BijanShahrokhi.jpg"
      />
      <TeamMember
        fullName="Aneesha Raines"
        title="Engineering Manager, O(1) Labs"
        src="/static/img/headshots/AneeshaRaines.jpeg"
      />
      <TeamMember
        fullName="Sherry Lin"
        title="Marketing Manager, O(1) Labs"
        src="/static/img/headshots/SherryLin.jpg"
      />
      <TeamMember
        fullName="Carey Janecka"
        title="Product Engineer, O(1) Labs"
        src="/static/img/headshots/CareyJanecka.jpg"
      />
      <TeamMember
        fullName="Kate El-Bizri"
        title="Visual Designer,  O(1) Labs"
        src="/static/img/headshots/KateElBizri2.jpg"
      />
      <TeamMember
        fullName="Deepthi Kumar"
        title="Protocol Engineer,  O(1) Labs"
        src="/static/img/headshots/DeepthiKumar.jpg"
      />
      <TeamMember
        fullName="Paul Steckler"
        title="Protocol Engineer,   O(1) Labs"
        src="/static/img/headshots/PaulSteckler.jpg"
      />
      <TeamMember
        fullName="Jiawei Tang"
        title="Protocol Engineer,  O(1) Labs"
        src="/static/img/headshots/JiaweiTang.jpg"
      />
      <TeamMember
        fullName="Nathan Holland"
        title="Protocol Engineer,  O(1) Labs"
        src="/static/img/headshots/NathanHolland.jpg"
      />
      <TeamMember
        fullName="Matthew Ryan"
        title="Protocol Engineer,  O(1) Labs"
        src="/static/img/headshots/MatthewRyan.jpg"
      />
      <TeamMember
        fullName="Ahmad Wilson"
        title="Protocol Reliability Engineer, O(1) Labs"
        src="/static/img/headshots/AhmadWilson.jpg"
      />
      <TeamMember
        fullName="Vanishree Rao"
        title="Protocol Researcher, O(1) Labs"
        src="/static/img/headshots/VanishreeRao.jpg"
      />
      <TeamMember
        fullName="Michelle Wong"
        title="Product Engineer, O(1) Labs"
        src="/static/img/headshots/MichelleWong.jpg"
      />
      <TeamMember
        fullName="Nacera Rodstein"
        title="Operations Associate, O(1) Labs"
        src="/static/img/headshots/NaceraRodstein.jpg"
      />
      <TeamMember
        fullName="Christine Yip"
        title="Community Manager, O(1) Labs"
        src="/static/img/headshots/ChristineYip.jpg"
      />
      <TeamMember
        fullName="Ember Arlynx"
        title="Protocol Engineer, O(1) Labs"
        src="/static/img/headshots/Ember.jpg"
      />
    </div>;
  };
};

module GenesisMembersGrid = {
  module Styles = {
    open Css;

    let genesisHeader = merge([Theme.Type.h2, style([])]);
    let genesisCopy =
      style([
        unsafe("grid-area", "1 /1 / span 1 / span 2"),
        media(Theme.MediaQuery.tablet, [width(`rem(23.))]),
      ]);
    let sectionSubhead =
      merge([
        Theme.Type.sectionSubhead,
        style([
          fontSize(`px(19)),
          lineHeight(`rem(1.75)),
          marginTop(`rem(0.5)),
          marginBottom(`rem(2.)),
          letterSpacing(`pxFloat(-0.4)),
        ]),
      ]);
    let grid =
      style([
        marginTop(`rem(1.)),
        display(`grid),
        paddingTop(`rem(1.)),
        gridTemplateColumns([`rem(10.), `rem(10.)]),
        gridAutoRows(`rem(17.3)),
        gridColumnGap(`rem(1.)),
        gridRowGap(`rem(1.)),
        media(
          Theme.MediaQuery.tablet,
          [gridTemplateColumns([`rem(21.), `rem(10.), `rem(10.)])],
        ),
        media(
          Theme.MediaQuery.desktop,
          [
            gridTemplateColumns([
              `rem(23.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
              `rem(11.),
            ]),
          ],
        ),
      ]);
  };
  [@react.component]
  let make = () => {
    <div className=Styles.grid>
      <div className=Styles.genesisCopy>
        <h2 className=Styles.genesisHeader>
          {React.string("Genesis Members")}
        </h2>
        <p className=Styles.sectionSubhead>
          {React.string(
             "Meet the node operators, developers, and community builders making Mina happen.",
           )}
        </p>
        <Button bgColor=Theme.Colors.orange width={`rem(13.5)}>
          {React.string("See More Members ")}
          <Icon kind=Icon.ArrowRightSmall size=1. />
        </Button>
      </div>
      <TeamMember
        fullName="Greg | DeFidog"
        title="Genesis Founding Member"
        src="/static/img/headshots/Greg.jpg"
      />
      <TeamMember
        fullName="Alexander#4542"
        title="Genesis Founding Member"
        src="/static/img/headshots/Alexander.jpg"
      />
      <TeamMember
        fullName="GarethDavies"
        title="Genesis Founding Member"
        src="/static/img/headshots/GarethDavies.jpg"
      />
    </div>;
  };
};

[@react.component]
let make = () => {
  <div className=Styles.container>
    /* O1 Labs Section  */
      <div className=Styles.headerCopy>
        <h2 className=Styles.header> {React.string("Meet the Team")} </h2>
        <p className=Styles.sectionSubhead>
          {React.string(
             "Mina is an inclusive open source protocol uniting teams and technicians from San Francisco and around the world.",
           )}
        </p>
      </div>
      <Rule color=Theme.Colors.black />
      <TeamGrid />
      /*  Genesis Members Section  */
      <div className=Styles.genesisRule>
        <Rule color=Theme.Colors.black />
      </div>
      <GenesisMembersGrid />
    </div>;
};